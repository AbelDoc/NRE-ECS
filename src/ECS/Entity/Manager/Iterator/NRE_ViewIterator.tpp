
    /**
     * @file NRE_ViewIterator.hpp
     * @brief Implementation of ECS's API Object : ViewIterator
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace ECS {

            template <class T, bool All>
            inline ViewIterator<T, All>::ViewIterator(uint32 i) : index(i), capacity(Utility::Singleton<EntityManager>::get().getCapacity()), freeCursor(~0UL) {
                if (All) {
                    std::sort(Utility::Singleton<EntityManager>::get().getFreeList().begin(), Utility::Singleton<EntityManager>::get().getFreeList().end());
                    freeCursor = 0;
                }
            }

            template <class T, bool All>
            inline ViewIterator<T, All>::ViewIterator(EntityManager::ComponentMask const m, uint32 i) : mask(m), index(i), capacity(Utility::Singleton<EntityManager>::get().getCapacity()), freeCursor(~0UL) {
                if (All) {
                    std::sort(Utility::Singleton<EntityManager>::get().getFreeList().begin(), Utility::Singleton<EntityManager>::get().getFreeList().end());
                    freeCursor = 0;
                }
            }

            template <class T, bool All>
            inline void ViewIterator<T, All>::next() {
                while (index < capacity && !predicate()) {
                    ++index;
                }

                if (index < capacity) {
                    Entity entity = Utility::Singleton<EntityManager>::get().get(Utility::Singleton<EntityManager>::get().createId(index));
                    static_cast <T*> (this)->nextEntity(entity);
                }
            }

            template <class T, bool All>
            inline bool ViewIterator<T, All>::predicate() {
                return (All && validEntity()) || (Utility::Singleton<EntityManager>::get().getEntityComponentMask(index) & mask) == mask;
            }

            template <class T, bool All>
            inline bool ViewIterator<T, All>::validEntity() {
                Utility::Vector<uint32> const& freeList = Utility::Singleton<EntityManager>::get().getFreeList();
                if (freeCursor < freeList.getSize() && freeList[freeCursor] == index) {
                    ++freeCursor;
                    return false;
                }
                return true;
            }

            template <class T, bool All>
            inline Entity ViewIterator<T, All>::operator *() {
                return Entity(Utility::Singleton<EntityManager>::get().createId(index));
            }

            template <class T, bool All>
            inline const Entity ViewIterator<T, All>::operator *() const {
                return Entity(Utility::Singleton<EntityManager>::get().createId(index));
            }

            template <class T, bool All>
            inline T& ViewIterator<T, All>::operator++() {
              ++index;
              next();
              return *(static_cast <T*> (this));
            }

            template <class T, bool All>
            inline bool ViewIterator<T, All>::operator==(T const& rhs) const {
                return index == rhs.index;
            }

            template <class T, bool All>
            inline bool ViewIterator<T, All>::operator!=(T const& rhs) const {
                return !(*this == rhs);
            }

        }
    }
