
    /**
     * @file NRE_ComponentHandle.hpp
     * @brief Implementation of ECS's API Object : ComponentHandle
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace ECS {

            template <class T>
            inline ComponentHandle<T>::ComponentHandle(Id i) : id(i) {
            }

            template <class T>
            inline bool ComponentHandle<T>::isValid() const {
                return Utility::Singleton<EntityManager>::get().isValid(id) && Utility::Singleton<EntityManager>::get().hasComponent<T>(id);
            }

            template <class T>
            inline T* ComponentHandle<T>::get() {
                assert(isValid());
                return Utility::Singleton<EntityManager>::get().getComponentPtr<T>(id);
            }

            template <class T>
            inline const T* ComponentHandle<T>::get() const {
                assert(isValid());
                return Utility::Singleton<EntityManager>::get().getComponentPtr<T>(id);
            }

            template <class T>
            inline Entity ComponentHandle<T>::getEntity() {
                assert(isValid());
                return Utility::Singleton<EntityManager>::get().get(id);
            }

            template <class T>
            inline void ComponentHandle<T>::remove() {
                assert(isValid());
                Utility::Singleton<EntityManager>::get().remove<T>(id);
            }

            template <class T>
            inline T* ComponentHandle<T>::operator->() {
                return get();
            }

            template <class T>
            inline const T* ComponentHandle<T>::operator->() const {
                return get();
            }

            template <class T>
            inline T& ComponentHandle<T>::operator *() {
                return *get();
            }

            template <class T>
            inline T const& ComponentHandle<T>::operator *() const {
                return *get();
            }

            template <class T>
            inline bool ComponentHandle<T>::operator==(ComponentHandle<T> const& c) const {
                return id == c.id;
            }

            template <class T>
            inline bool ComponentHandle<T>::operator!=(ComponentHandle<T> const& c) const {
                return !(*this == c);
            }

        }
    }
