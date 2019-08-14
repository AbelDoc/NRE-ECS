
    /**
     * @file NRE_ComponentHandle.hpp
     * @brief Declaration of ECS's API Object : ComponentHandle
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>

    #include "../../Entity/Id/NRE_Id.hpp"
    #include "../../Entity/Manager/NRE_EntityManager.hpp"

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

            /**
             * @class ComponentHandle
             * @brief class helper to handle access to a component
             */
            template <class T>
            class ComponentHandle {
                private:    //Fields
                    Id id;  /**< Parent entity's id */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default Constructor
                         */
                        ComponentHandle() = default;
                        /**
                         * Construct a component handle with it's parent's id
                         * @param i the parent entity's id
                         */
                        ComponentHandle(Id i);

                    //## Copy-Constructor ##//
                        /**
                         * Copy c into this
                         * @param c the component handle to copy the content
                         */
                        ComponentHandle(ComponentHandle const& c) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move c into this, leaving c empty
                         * @param c the component handle to move
                         */
                        ComponentHandle(ComponentHandle && c) = default;

                    //## Deconstructor ##//
                        /**
                         * ComponentHandle Deconstructor
                         */
                        ~ComponentHandle() = default;

                    //## Getter ##//
                        /**
                         * Test if the parent entity is valid
                         * @return the test's result
                         */
                        bool isValid() const;
                        /**
                         * Component getter
                         * @return the handled component
                         */
                        T* get();
                        /**
                         * Component getter
                         * @return the handled component
                         */
                        const T* get() const;
                        /**
                         * Parent getter
                         * @return the parent entity
                         */
                        Entity getEntity();

                    //## Methods ##//
                        /**
                         * Remove the component from the parent entity
                         */
                        void remove();

                    //## Access Operator ##//
                        /**
                         * Arrow dereference operator
                         * @return  a pointer on the handle component
                         */
                        T* operator->();
                        /**
                         * Arrow dereference operator
                         * @return  a pointer on the handle component
                         */
                        const T* operator->() const;
                        /**
                         * Dot dereference operator
                         * @return  a reference on the handle component
                         */
                        T& operator *();
                        /**
                         * Dot dereference operator
                         * @return  a reference on the handle component
                         */
                        T const& operator *() const;

                    //## Assignment Operator ##//
                        /**
                         * Copy assignment of c into this
                         * @param c the component handle to copy into this
                         * @return      the reference of himself
                         */
                        ComponentHandle<T>& operator =(ComponentHandle<T> const& c) = default;
                        /**
                         * Move assignment of c into this, leaving c empty
                         * @param c the component handle to move into this
                         * @return      the reference of himself
                         */
                        ComponentHandle<T>& operator =(ComponentHandle<T> && c) = default;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and c
                         * @param c the component handle to test with this
                         * @return  the test's result
                         */
                        bool operator==(ComponentHandle<T> const& c) const;
                        /**
                         * Difference test between this and c
                         * @param c the component handle to test with this
                         * @return  the test's result
                         */
                        bool operator!=(ComponentHandle<T> const& c) const;

            };
        }
    }

    #include "NRE_ComponentHandle.tpp"
