
    /**
     * @file NRE_EntityManager.hpp
     * @brief Declaration of ECS's API Object : EntityManager
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <bitset>
    #include <functional>
    #include <cassert>

    #include "Allocator/NRE_PoolAllocator.hpp"
    #include "../../Component/NRE_AbstractComponent.hpp"
    #include "../Id/NRE_Id.hpp"

     /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace ECS
         * @brief ECS's API
         */
        namespace ECS {

            class IComponentHelper;
            class Entity;
            template<class> class ComponentHandle;
            template<class...> class UnpackingView;
            template<class> class ComponentHelper;
            template<class> class Component;
            template<bool, class...> class TypedView;
            template<bool> class View;

            /** Shortcut typedef to hide DebugView type */
            typedef View<true> DebugView;

            /**
             * @class EntityManager
             * @brief Manage Entity creation & component assignment
             */
            class EntityManager : public Utility::Singleton<EntityManager> {
                friend Utility::Singleton<EntityManager>;
                public:
                    /** Shortcut to hide the bitset used for component masking */
                    typedef std::bitset<AbstractComponent::MAX_COMPONENTS> ComponentMask;
                private:    //Fields
                    Utility::Vector<AbstractAllocator*> componentPools;     /**< The manager component's allocators */
                    Utility::Vector<IComponentHelper*> componentsHelper;    /**< The manager component's helpers */
                    Utility::Vector<ComponentMask> entityComponentMask;     /**< The manager entities component mask */
                    Utility::Vector<uint32> entityVersion;                  /**< The manager existing entity's version */
                    Utility::Vector<uint32> freeList;                       /**< The manager entity free list */
                    uint32 counter;                                         /**< The manager current index counter */

                public:     //Fields
                    /**
                     * @struct identity
                     * @brief Used for meta programming
                     */
                    template <class T>
                    struct identity {
                        /** Typedef for meta programming */
                        typedef T type;
                    };

                public:    // Methods
                    //## Getter ##//
                        /**
                         * FreeList getter
                         * @return the manager's free list
                         */
                        Utility::Vector<uint32>& getFreeList();
                        /**
                         * Component mask getter
                         * @param  index the mask's index
                         * @return       the corresponding mask
                         */
                        ComponentMask const& getEntityComponentMask(uint32 index) const;
                        /**
                         * Size getter
                         * @return the manager's entity number
                         */
                        std::size_t getSize() const;
                        /**
                         * Capacity getter
                         * @return the manager's entity capacity
                         */
                        std::size_t getCapacity() const;
                        /**
                         * Entity getter
                         * @param  id the entity's id
                         * @return    the corresponding entity
                         */
                        Entity get(Id id);
                        /**
                         * Test if an entity is assigned to T component
                         * @param  id the entity's id
                         * @return    the test's result
                         */
                        template <typename T>
                        bool hasComponent(Id id) const;
                        /**
                         * Component getter
                         * @param  id the entity's id
                         * @return    the T component handle
                         */
                        template <typename T, typename = typename std::enable_if<!std::is_const<T>::value>::type>
                        ComponentHandle<T> getComponent(Id id);
                        /**
                         * Component getter
                         * @param  id the entity's id
                         * @return    the T component handle
                         */
                        template <typename T, typename = typename std::enable_if<std::is_const<T>::value>::type>
                        const ComponentHandle<T> getComponent(Id id) const;
                        /**
                         * Components getter
                         * @param id the entity's id
                         * @return   all components assigned to the entity
                         */
                        template <class ... Components>
                        std::tuple<ComponentHandle<Components>...> getComponents(Id id);
                        /**
                         * Components getter
                         * @param id the entity's id
                         * @return   all components assigned to the entity
                         */
                        template <class ... Components>
                        std::tuple<ComponentHandle<const Components>...> getComponents(Id id) const;
                        /**
                         * Debug view getter
                         * @return a debug view on all entity stored
                         */
                        DebugView getEntitiesForDebugging();
                        /**
                         * Component pointer getter
                         * @param  id an entity's id
                         * @return    a direct pointer on the component
                         */
                        template <class T>
                        T* getComponentPtr(Id id);
                        /**
                         * Component pointer getter
                         * @param  id an entity's id
                         * @return    a direct pointer on the component
                         */
                        template <class T>
                        const T* getComponentPtr(Id id) const;
                        /**
                         * Component mask getter
                         * @param  id the entity's id
                         * @return    the corresponding mask
                         */
                        ComponentMask getComponentMask(Id id);
                        /**
                         * Component mask getter
                         * @return a created mask masked with T component
                         */
                        template <class T>
                        ComponentMask getComponentMask();
                        /**
                         * Component mask getter
                         * @return a created mask masked with multiple components
                         */
                        template <class C1, class C2, class ... Components>
                        ComponentMask getComponentMask();
                        /**
                         * Component mask getter
                         * @return a created mask masked with a component handle type
                         */
                        template <class T>
                        ComponentMask getComponentMask(ComponentHandle<T> const& c);
                        /**
                         * Component mask getter
                         * @return a created mask masked with multiple component handles type
                         */
                        template <class C1, class ... Components>
                        ComponentMask getComponentMask(ComponentHandle<C1> const& c1, ComponentHandle<Components> const&... args);

                    //## Methods ##//
                        /**
                         * Test if an entity is valid
                         * @param  id the entity's id
                         * @return    the test's result
                         */
                        bool isValid(Id id) const;
                        /**
                         * Create a new entity
                         * @return the newly created entity
                         */
                        Entity create();
                        /**
                         * Destroy an entity
                         * @param id the entity's id
                         */
                        void destroy(Id id);
                        /**
                         * Create an entity id from an index
                         * @param  index the id's index
                         * @return       the newly created id
                         */
                        Id createId(uint32 index) const;
                        /**
                         * Assign a T component to an entity
                         * @param  id   the entity's id
                         * @param  args the component's construction arguments pack
                         * @return      the newly created component wrapped into an handle
                         */
                        template <class T, class ... Args>
                        ComponentHandle<T> assign(Id id, Args && ... args);
                        /**
                         * Remove a component from an entity
                         * @param id the entity's id
                         */
                        template <class T>
                        void remove(Id id);
                        /**
                         * Typedview getter
                         * @return a typed view on entity with passed components type
                         */
                        template <class ... Components>
                        TypedView<false, Components...> getEntitiesWithComponents();
                        /**
                         * Typedview getter
                         * @return a typed view on entity with passed component handles' type
                         */
                        template <class ... Components>
                        UnpackingView<Components...> getEntitiesWithComponents(ComponentHandle<Components>& ... components);
                        /**
                         * A for each loop on the typed view element
                         * @param f a lambda to apply
                         */
                        template <class ... Components>
                        void each(class identity<std::function<void(Entity entity, Components&...)>>::type f);
                        /**
                         * Unpack an entity's component into an handle
                         * @param id the entity's id
                         * @param a  the component handle to store the unpacked component
                         */
                        template <class T>
                        void unpack(Id id, ComponentHandle<T>& a);
                        /**
                         * Unpack an entity's components into multiple handles
                         * @param id    the entity's id
                         * @param a     the component handle to store the first unpacked component
                         * @param args  multiple component handles to store the other unpacked components
                         */
                        template <class T, class ... Args>
                        void unpack(Id id, ComponentHandle<T> &a, ComponentHandle<Args>& ... args);
                        /**
                         * Reset the entity manager
                         */
                        void reset();
                        /**
                         * Assert if an entity is valid
                         * @param id the entity's id
                         */
                        void assertValid(Id id) const;
                        /**
                         * Accommodate entity from an index
                         * @param index an entity's id index
                         */
                        void accommodateEntity(uint32 index);
                        /**
                         * Accommodate a component's allocator
                         * @return the component's allocator
                         */
                        template <typename T>
                        PoolAllocator<T>* accommodateComponent();

                private:   // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        EntityManager() = default;

                    //## Deconstructor ##//
                        /**
                         * EntityManager Deconstructor
                         */
                        ~EntityManager();

                public:     // Static
                    /**
                     * Component category getter
                     * @return a T component category
                     */
                    template <class T>
                    static AbstractComponent::Category getComponentCategory() {
                        return Component<typename std::remove_const<T>::type>::getCategory();
                    }

            };
        }
    }

    #include "NRE_EntityManager.tpp"
