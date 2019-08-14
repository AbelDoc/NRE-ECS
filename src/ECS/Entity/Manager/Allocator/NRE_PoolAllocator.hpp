
    /**
     * @file NRE_AbstractAllocator.hpp
     * @brief Declaration of ECS's API Object : PoolAllocator
     * @author Louis ABEL
     * @date 14/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <Header/NRE_Utility.hpp>
     #include "NRE_AbstractAllocator.hpp"

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
             * @class PoolAllocator
             * @brief A pool allocator used to manage component in the ECS
             */
            template <class T, std::size_t ChunkSize = 4096>
            class PoolAllocator : public AbstractAllocator {
                private :   // Fields
                    Utility::Vector<T*> chunks;     /**< The allocator data chunks */
                    std::size_t size;               /**< The allocator current size */
                    std::size_t capacity;           /**< The allocator current capacity */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the pool allocator
                         */
                        PoolAllocator();

                    //## Move-Constructor ##//
                        /**
                         * Move p into this
                         * @param p the pool allocator to move
                         */
                        PoolAllocator(PoolAllocator && p);

                    //## Deconstructor ##//
                        /**
                         * PoolAllocator Deconstructor
                         */
                        ~PoolAllocator();

                    //## Methods ##//
                        /**
                         * Expand the pool in order to accept at least size elements
                         * @param newSize the new minimum size
                         */
                        void expand(std::size_t newSize) override;
                        /**
                         * Query an object address
                         * @param index the object index
                         */
                        T* get(std::size_t index);
                        /**
                         * Query an object address
                         * @param index the object index
                         */
                        const T* get(std::size_t index) const;
                        /**
                         * Destroy an object
                         * @param index the object index
                         */
                        void destroy(std::size_t index);

                    //## Assignment Operator ##//
                        /**
                         * Move assign p into this
                         * @param p the object to copy into this
                         * @return  the reference of himself
                         */
                        PoolAllocator& operator =(PoolAllocator && p);

                private :   // Methods
                    /**
                     * Reserve memory up to the given size
                     * @param newSize the new minimum size
                     */
                    void reserve(std::size_t newSize);
                    /**
                     * Clear the allocator
                     */
                    void clear();

            };
        }
    }

    #include "NRE_PoolAllocator.tpp"
