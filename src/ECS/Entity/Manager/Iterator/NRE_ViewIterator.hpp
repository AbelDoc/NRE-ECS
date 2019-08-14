
    /**
     * @file NRE_ViewIterator.hpp
     * @brief Declaration of ECS's API Object : ViewIterator
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>
    #include <iterator>
    #include <algorithm>

    #include "../NRE_EntityManager.hpp"
    #include "../../Id/NRE_Id.hpp"

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
             * @class ViewIterator
             * @brief An iterator over a view of entities
             */
            template <class T, bool All = false>
            class ViewIterator : public std::iterator<std::input_iterator_tag, Id> {
                private:    //Fields
                    EntityManager::ComponentMask mask;  /**< The view iterator's component mask */
                    uint32 index;                       /**< The entity's index */
                    std::size_t capacity;               /**< The iterator's capacity */
                    std::size_t freeCursor;             /**< The iterator's free list cursor */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        ViewIterator() = delete;
                        /**
                         * Construct a view iterator from an entity's index
                         * @param i the entity's index
                         */
                        ViewIterator(uint32 i);
                        /**
                         * Construct a view iterator from an entity's index and a component mask
                         * @param m the entity's component mask
                         * @param i the entity's index
                         */
                        ViewIterator(EntityManager::ComponentMask const m, uint32 i);

                    //## Deconstructor ##//
                        /**
                         * ViewIterator Deconstructor
                         */
                        virtual ~ViewIterator() = default;

                    //## Methods ##//
                        /**
                         * Access the next entity
                         */
                        void next();
                        /**
                         * The iterator predicate
                         * @return the predicate's result
                         */
                        bool predicate();
                        /**
                         * Tell if an entity is valid
                         * @return the test's result
                         */
                        bool validEntity();

                    //## Access Operator ##//
                        /**
                         * Dot dereference operator
                         * @return  a reference on the current entity (from the current index)
                         */
                        Entity operator *();
                        /**
                         * Dot dereference operator
                         * @return  a const reference on the current entity (from the current index)
                         */
                        const Entity operator *() const;

                    //## Arithmetic Operator ##//
                        /**
                         * Incremental operator, pass to the next entity
                         * @return a reference on the iterator type
                         */
                        T& operator++();

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and rhs
                         * @param rhs the T type view iterator to test with this
                         * @return  the test's result
                         */
                        bool operator==(T const& rhs) const;
                        /**
                         * Difference test between this and rhs
                         * @param rhs the T type view iterator to test with this
                         * @return  the test's result
                         */
                        bool operator!=(T const& rhs) const;

            };
        }
    }

    #include "NRE_ViewIterator.tpp"
