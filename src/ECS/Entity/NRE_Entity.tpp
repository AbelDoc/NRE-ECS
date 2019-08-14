
    /**
     * @file NRE_Entity.hpp
     * @brief Implementation of ECS's API Object : Entity
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace ECS {

            inline Entity::Entity(Id i) : id(i) {
            }

            inline Entity::Entity(Entity const& e) : id(e.id) {
            }

            inline Entity::Entity(Entity && e) : id(std::move(e.id)) {
            }

            inline bool Entity::isValid() const {
                return Utility::Singleton<EntityManager>::get().isValid(id);
            }

            inline Id const& Entity::getId() const {
                return id;
            }

            inline std::bitset<AbstractComponent::MAX_COMPONENTS> Entity::getComponentMask() const {
                return Utility::Singleton<EntityManager>::get().getComponentMask(id);
            }

            inline void Entity::invalidate() {
                id = INVALID;
            }

            inline void Entity::destroy() {
                assert(isValid());
                Utility::Singleton<EntityManager>::get().destroy(id);
                invalidate();
            }

            inline Entity& Entity::operator =(Entity && e) {
                id = std::move(e.id);
                return *this;
            }

            inline bool Entity::operator ==(Entity const& e) const {
                return e.id == id;
            }

            inline bool Entity::operator !=(Entity const& e) const {
                return !(e == *this);
            }

            inline bool Entity::operator <(Entity const& e) const {
                return e.id < id;
            }

            template <class T>
            inline bool Entity::hasComponent() const {
                assert(isValid());
                return Utility::Singleton<EntityManager>::get().hasComponent<T>(id);
            }

            template <typename T, typename>
            inline ComponentHandle<T> Entity::getComponent() {
                assert(isValid());
                return Utility::Singleton<EntityManager>::get().getComponent<T>(id);
            }

            template <typename T, typename>
            inline ComponentHandle<T> Entity::getComponent() const {
                assert(isValid());
                return Utility::Singleton<EntityManager>::get().getComponent<const T>(id);
            }

            template <class ... Components>
            inline std::tuple<ComponentHandle<Components>...> Entity::getComponents() {
                assert(isValid());
                return Utility::Singleton<EntityManager>::get().getComponents<Components...>(id);
            }

            template <class ... Components>
            inline std::tuple<ComponentHandle<const Components>...> Entity::getComponents() const {
                assert(isValid());
                return Utility::Singleton<EntityManager>::get().getComponents<const Components...>(id);
            }

            template <class T, class ... Args>
            inline ComponentHandle<T> Entity::assign(Args && ... args) {
                assert(isValid());
                return Utility::Singleton<EntityManager>::get().assign<T>(id, std::forward<Args>(args) ...);
            }

            template <class T, class ... Args>
            inline ComponentHandle<T> Entity::replace(Args && ... args) {
                assert(isValid());
                auto handle = getComponent<T>();
                if (handle.isValid()) {
                    *(handle.get()) = T(std::forward<Args>(args) ...);
                } else {
                    handle = assign<T, Args...>();
                }
                return handle;
            }

            template <class T>
            inline void Entity::remove() {
                assert(isValid() && hasComponent<T>());
                Utility::Singleton<EntityManager>::get().remove<T>(id);
            }

            template <class T, class ... Args>
            inline void Entity::unpack(ComponentHandle<T>& handle, ComponentHandle<Args> & ... args) {
                assert(isValid());
                Utility::Singleton<EntityManager>::get().unpack(id, handle, args ...);
            }

        }
    }
