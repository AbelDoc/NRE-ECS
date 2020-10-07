
    /**
     * @file NRE_EntityManager.tpp
     * @brief Implementation of ECS's API Object : EntityManager
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace ECS {

            inline EntityManager::~EntityManager() {
                reset();
            }

            inline EntityManager::ComponentMask EntityManager::getComponentMask(Id id) {
                assertValid(id);
                return entityComponentMask.get(id.getIndex());
            }

            inline bool EntityManager::isValid(Id id) const {
                return id.getIndex() < entityVersion.getSize() && entityVersion[id.getIndex()] == id.getVersion();
            }

            inline Core::Vector<uint32>& EntityManager::getFreeList() {
                return freeList;
            }

            inline EntityManager::ComponentMask const& EntityManager::getEntityComponentMask(uint32 index) const {
                return entityComponentMask[index];
            }

            inline std::size_t EntityManager::getSize() const {
                return entityComponentMask.getSize() - freeList.getSize();
            }

            inline std::size_t EntityManager::getCapacity() const {
                return entityComponentMask.getSize();
            }

            inline Id EntityManager::createId(uint32 index) const {
                return Id(index, entityVersion[index]);
            }

            inline void EntityManager::assertValid(Id id) const {
                assert(id.getIndex() < entityComponentMask.getSize());
                assert(entityVersion[id.getIndex()] == id.getVersion());
            }

            template <typename T>
            inline bool EntityManager::hasComponent(Id id) const {
                assertValid(id);
                std::size_t category = getComponentCategory<T>();
                if (category >= componentPools.getSize()) {
                    return false;
                }
                PoolAllocator<T>* pool = static_cast <PoolAllocator<T>*> (componentPools[category]);
                return !(!pool || !entityComponentMask[id.getIndex()][category]);
            }

            template <typename T, typename>
            inline ComponentHandle<T> EntityManager::getComponent(Id id) {
                assertValid(id);
                std::size_t category = getComponentCategory<T>();

                if (category >= componentPools.getSize()) {
                    return ComponentHandle<T>();
                }
                PoolAllocator<T>* pool = static_cast <PoolAllocator<T>*> (componentPools[category]);
                if (!pool || !entityComponentMask[id.getIndex()][category]) {
                    return ComponentHandle<T>();
                }
                return ComponentHandle<T>(id);
            }

            template <typename T, typename>
            inline const ComponentHandle<T> EntityManager::getComponent(Id id) const {
                assertValid(id);
                std::size_t category = getComponentCategory<T>();

                if (category >= componentPools.getSize()) {
                    return ComponentHandle<T>();
                }
                PoolAllocator<T>* pool = static_cast <PoolAllocator<T>*> (componentPools[category]);
                if (!pool || !entityComponentMask[id.getIndex()][category]) {
                    return ComponentHandle<T>();
                }
                return ComponentHandle<T>(id);
            }

            template <class ... Components>
            inline std::tuple<ComponentHandle<Components>...> EntityManager::getComponents(Id id) {
                return std::make_tuple(getComponent<Components>(id)...);
            }

            template <class ... Components>
            inline std::tuple<ComponentHandle<const Components>...> EntityManager::getComponents(Id id) const {
                return std::make_tuple(getComponent<const Components>(id)...);
            }

            template <class T>
            inline T* EntityManager::getComponentPtr(Id id) {
                assert(isValid(id));
                PoolAllocator<T>* pool = static_cast <PoolAllocator<T>*> (componentPools[getComponentCategory<T>()]);
                assert(pool);
                return pool->get(id.getIndex());
            }

            template <class T>
            inline const T* EntityManager::getComponentPtr(Id id) const {
                assertValid(id);
                const PoolAllocator<T>* pool = static_cast <const PoolAllocator<T>*> (componentPools[getComponentCategory<T>()]);
                assert(pool);
                return pool->get(id.getIndex());
            }

            template <class T>
            inline EntityManager::ComponentMask EntityManager::getComponentMask() {
                ComponentMask mask;
                mask.set(getComponentCategory<T>());
                return mask;
            }

            template <class C1, class C2, class ... Components>
            inline EntityManager::ComponentMask EntityManager::getComponentMask() {
                return getComponentMask<C1>() | getComponentMask<C2, Components ...>();
            }

            template <class T>
            inline EntityManager::ComponentMask EntityManager::getComponentMask(ComponentHandle<T> const& c) {
                return getComponentMask<T>();
            }

            template <class C1, class ... Components>
            inline EntityManager::ComponentMask EntityManager::getComponentMask(ComponentHandle<C1> const& c1, ComponentHandle<Components> const&... args) {
                return getComponentMask<C1, Components ...>();
            }

            template <class T, class ... Args>
            inline ComponentHandle<T> EntityManager::assign(Id id, Args && ... args) {
                assertValid(id);
                const AbstractComponent::Category category = getComponentCategory<T>();

                assert(!entityComponentMask[id.getIndex()].test(category));

                PoolAllocator<T>* pool = accommodateComponent<T>();
                new(pool->get(id.getIndex())) T(std::forward<Args>(args) ...);

                entityComponentMask[id.getIndex()].set(category);

                return ComponentHandle<T>(id);
            }

            template <class T>
            inline void EntityManager::remove(Id id) {
                assertValid(id);
                const AbstractComponent::Category category = getComponentCategory<T>();
                const uint32 index = id.getIndex();

                PoolAllocator<T>* pool = static_cast <PoolAllocator<T>*> (componentPools[category]);
                entityComponentMask[id.getIndex()].reset(category);
                pool->destroy(index);
            }

            template <class ... Components>
            inline TypedView<false, Components...> EntityManager::getEntitiesWithComponents() {
                auto mask = getComponentMask<Components ...>();
                return TypedView<false, Components...>(mask);
            }

            template <class ... Components>
            inline UnpackingView<Components...> EntityManager::getEntitiesWithComponents(ComponentHandle<Components>& ... components) {
                auto mask = getComponentMask<Components...>();
                return UnpackingView<Components...>(mask, components...);
            }

            template <class ... Components>
            inline void EntityManager::each(class identity<std::function<void(Entity entity, Components&...)>>::type f) {
                return getEntitiesWithComponents<Components...>().each(f);
            }

            template <class T>
            inline void EntityManager::unpack(Id id, ComponentHandle<T>& a) {
                assertValid(id);
                a = getComponent<T>(id);
            }

            template <class T, class ... Args>
            inline void EntityManager::unpack(Id id, ComponentHandle<T> &a, ComponentHandle<Args>& ... args) {
                assertValid(id);
                a = getComponent<T>(id);
                unpack<Args ...>(id, args ...);
            }

            template <typename T>
            inline PoolAllocator<T>* EntityManager::accommodateComponent() {
                AbstractComponent::Category category = getComponentCategory<T>();
                if (componentPools.getSize() <= category) {
                    componentPools.resize(category + 1, nullptr);
                }
                if (!componentPools[category]) {
                    PoolAllocator<T>* pool = new PoolAllocator<T>();
                    pool->expand(counter);
                    componentPools[category] = pool;
                }
                if (componentsHelper.getSize() <= category) {
                    componentsHelper.resize(category + 1, nullptr);
                }
                if (!componentsHelper[category]) {
                    ComponentHelper<T>* helper = new ComponentHelper<T>();
                    componentsHelper[category] = helper;
                }
                return static_cast <PoolAllocator<T>*> (componentPools[category]);
            }

        }
    }
