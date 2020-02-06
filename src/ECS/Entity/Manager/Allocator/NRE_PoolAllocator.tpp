
    /**
     * @file NRE_PoolAllocator.tpp
     * @brief Implementation of ECS's API Object : PoolAllocator
     * @author Louis ABEL
     * @date 14/08/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace ECS {

            template <class T, std::size_t ChunkSize>
            inline PoolAllocator<T, ChunkSize>::PoolAllocator() : size(0), capacity(0) {
            }

            template <class T, std::size_t ChunkSize>
            inline PoolAllocator<T, ChunkSize>::PoolAllocator(PoolAllocator && p) : chunks(std::move(p.chunks)), size(p.size), capacity(p.capacity) {
            }

            template <class T, std::size_t ChunkSize>
            inline PoolAllocator<T, ChunkSize>::~PoolAllocator() {
                clear();
            }

            template <class T, std::size_t ChunkSize>
            inline void PoolAllocator<T, ChunkSize>::expand(std::size_t newSize) {
                if (newSize > size) {
                    if (newSize > capacity) {
                        reserve(newSize);
                    }
                    size = newSize;
                }
            }

            template <class T, std::size_t ChunkSize>
            inline T* PoolAllocator<T, ChunkSize>::get(std::size_t index) {
                return chunks[index / ChunkSize] + (index % ChunkSize);
            }

            template <class T, std::size_t ChunkSize>
            inline const T* PoolAllocator<T, ChunkSize>::get(std::size_t index) const {
                return chunks[index / ChunkSize] + (index % ChunkSize);
            }

            template <class T, std::size_t ChunkSize>
            inline void PoolAllocator<T, ChunkSize>::destroy(std::size_t index) {
                get(index)->~T();
            }

            template <class T, std::size_t ChunkSize>
            inline PoolAllocator<T, ChunkSize>& PoolAllocator<T, ChunkSize>::operator=(PoolAllocator && p) {
                if (this != &p) {
                    clear();
                    chunks = std::move(p.chunks);
                    size = p.size;
                    capacity = p.capacity;
                }
                return *this;
            }

            template <class T, std::size_t ChunkSize>
            inline void PoolAllocator<T, ChunkSize>::reserve(std::size_t newSize) {
                while (capacity < newSize) {
                    chunks.pushBack(static_cast <T*> (::operator new(sizeof(T) * ChunkSize)));
                    capacity += ChunkSize;
                }
            }

            template <class T, std::size_t ChunkSize>
            inline void PoolAllocator<T, ChunkSize>::clear() {
                for (std::size_t i = 0; i < size; i++) {
                    destroy(i);
                }
                for (T* chunk : chunks) {
                    ::operator delete(chunk);
                }
                size = 0;
                capacity = 0;
            }

        }
    }
