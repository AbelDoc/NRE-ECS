
    /**
     * @file NRE_Entity.hpp
     * @brief Declaration of ECS's API Object : Entity
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once


    #include <iostream>
    #include <string>
    #include <cassert>
    #include <tuple>
    #include <bitset>

    #include "Id/NRE_Id.hpp"
    #include "../Component/NRE_AbstractComponent.hpp"
    #include "Manager/NRE_EntityManager.hpp"

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

            class EntityManager;
            template<class> class Component;
            template<class> class ComponentHandle;

            /**
             * @class Entity
             * @brief A basic entity
             */
            class Entity {
                private:    //Fields
                    Id id;  /**< The entity's id */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Entity() = default;
                        /**
                         * Construct an entity from an id
                         * @param i the entity's id
                         */
                        Entity(Id i);

                    //## Copy-Constructor ##//
                        /**
                         * Copy e into this
                         * @param e the entity to copy the content
                         */
                        Entity(Entity const& e);

                    //## Move-Constructor ##//
                        /**
                         * Move e into this, leaving e empty
                         * @param e the entity to move
                         */
                        Entity(Entity && e);

                    //## Deconstructor ##//
                        /**
                         * Entity Deconstructor
                         */
                        ~Entity() = default;

                    //## Getter ##//
                        /**
                         * Test if the entity is valid
                         * @return    the test's result
                         */
                        bool isValid() const;
                        /**
                         * Id getter
                         * @return the entity's id
                         */
                        Id const& getId() const;
                        /**
                         * Test if the entity is assigned to T component
                         * @return    the test's result
                         */
                        template <class T>
                        bool hasComponent() const;
                        /**
                         * Component getter
                         * @return    the T component handle
                         */
                        template <typename T, typename = typename std::enable_if<!std::is_const<T>::value>::type>
                        ComponentHandle<T> getComponent();
                        /**
                         * Component getter
                         * @return    the T component handle
                         */
                        template <typename T, typename = typename std::enable_if<std::is_const<T>::value>::type>
                        ComponentHandle<T> getComponent() const;
                        /**
                         * Components getter
                         * @return   all components assigned to the entity
                         */
                        template <class ... Components>
                        std::tuple<ComponentHandle<Components>...> getComponents();
                        /**
                         * Components getter
                         * @return   all components assigned to the entity
                         */
                        template <class ... Components>
                        std::tuple<ComponentHandle<const Components>...> getComponents() const;
                        /**
                         * Component mask getter
                         * @return    the entity's component mask
                         */
                        std::bitset<AbstractComponent::MAX_COMPONENTS> getComponentMask() const;

                    //## Methods ##//
                        /**
                         * Invalidate the entity's id
                         */
                        void invalidate();
                        /**
                         * Assign a T component to the entity
                         * @param  args the component's construction arguments pack
                         * @return      the newly created component wrapped into an handle
                         */
                        template <class T, class ... Args>
                        ComponentHandle<T> assign(Args && ... args);
                        /**
                         * Replace a component, if it's not assigned, it's assigned
                         * @param  args the component's construction arguments pack
                         * @return      the newly created/replaced component wrapped into an handle
                         */
                        template <class T, class ... Args>
                        ComponentHandle<T> replace(Args && ... args);
                        /**
                         * Remove a component from the entity
                         */
                        template <class T>
                        void remove();
                        /**
                         * Unpack the entity's components into multiple handles
                         * @param handle    the component handle to store the first unpacked component
                         * @param args      multiple component handles to store the other unpacked components
                         */
                        template <class T, class ... Args>
                        void unpack(ComponentHandle<T>& handle, ComponentHandle<Args> & ... args);
                        /**
                         * Destroy the entity
                         */
                        void destroy();

                    //## Assignment Operator ##//
                        /**
                         * Copy assignment of e into this
                         * @param e the entity to copy into this
                         * @return      the reference of himself
                         */
                        Entity& operator =(Entity const& e) = default;
                        /**
                         * Move assignment of e into this, leaving e empty
                         * @param e the entity to move into this
                         * @return      the reference of himself
                         */
                        Entity& operator =(Entity && e);

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and e
                         * @param e the entity to test with this
                         * @return  the test's result
                         */
                        bool operator ==(Entity const& e) const;
                        /**
                         * Difference test between this and e
                         * @param e the entity to test with this
                         * @return  the test's result
                         */
                        bool operator !=(Entity const& e) const;
                        /**
                         * Inferior test between this and e
                         * @param e the entity to test with this
                         * @return  the test's result
                         */
                        bool operator <(Entity const& e) const;

                public:     // Static
                    static const Id INVALID;    /**< The unique invalid id */
            };

        }
    }

    #include "NRE_Entity.tpp"
