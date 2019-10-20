
    /**
     * @file NRE_SystemManager.hpp
     * @brief Implementation of ECS's API Object : SystemManager
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace ECS {

            inline SystemManager::SystemManager() : initialized(false) {
            }

            inline void SystemManager::updateAll() {
                assert(initialized);
                for (auto& ptr : systems) {
                    ptr->update();
                }
            }

            inline void SystemManager::configure() {
                for (auto& ptr : systems) {
                    ptr->configure();
                }
                initialized = true;
            }

            template <class T>
            inline T* SystemManager::getSystem() {
                assert(T::getCategory() < MAX_SYSTEM);
                assert(mask[T::getCategory()]);
                return static_cast <T*> (systems[T::getCategory()].get());
            }

            template <class T, class ... Args>
            inline void SystemManager::add(Args && ... args) {
                assert(T::getCategory() < MAX_SYSTEM);
                mask[T::getCategory()] = true;
                if (systems.getSize() <= T::getCategory()) {
                    systems.reserve(T::getCategory());
                    for (std::size_t i = systems.getSize(); i <= T::getCategory(); i++) {
                        systems.emplaceBack();
                    }
                }
                systems[T::getCategory()] = std::make_unique<T>(std::forward<Args>(args)...);
            }

            template <class T>
            inline void SystemManager::update() {
                assert(initialized);
                systems[T::getCategory()]->update();
            }

            template <class T>
            inline T* SystemManager::get() {
                return Utility::Singleton<SystemManager>::get().getSystem<T>();
            }

        }
    }
