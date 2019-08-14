
    /**
     * @file NRE_AbstractAllocator.hpp
     * @brief Declaration of ECS's API Object : AbstractAllocator
     * @author Louis ABEL
     * @date 14/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

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
             * @class AbstractAllocator
             * @brief An abstract allocator used in the ECS for component pool
             */
            class AbstractAllocator {
                public : // Methods
                    //## Copy-Constructor ##//
                        /**
                         * Copy forbidden
                         * @param a the AbstractAllocator to copy
                         */
                        AbstractAllocator(AbstractAllocator const& a) = delete;

                    //## Deconstructor ##//
                        /**
                         * AbstractAllocator Deconstructor
                         */
                        virtual ~AbstractAllocator() = default;

                    //## Methods ##//
                        /**
                         * Expand the pool in order to accept at least size elements
                         * @param newSize the new minimum size
                         */
                        virtual void expand(std::size_t newSize) = 0;

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param a the object to copy into this
                         * @return  the reference of himself
                         */
                        AbstractAllocator& operator =(AbstractAllocator const& a) = delete;
            };

        }
    }
