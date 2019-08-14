
    /**
     * @file NRE_View.hpp
     * @brief Implementation of ECS's API Object : View
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace ECS {

            template <bool All>
            inline View<All>::View() {
                mask.set();
            }

            template <bool All>
            inline View<All>::View(EntityManager::ComponentMask m) : mask(m) {
            }

            template <bool All>
            inline typename View<All>::Iterator View<All>::begin() {
                return View<All>::Iterator(mask, 0);
            }

            template <bool All>
            inline typename View<All>::Iterator const View<All>::begin() const {
                return View<All>::Iterator(mask, 0);
            }

            template <bool All>
            inline typename View<All>::Iterator View<All>::end() {
                return View<All>::Iterator(mask, static_cast <uint32> (Utility::Singleton<EntityManager>::get().getCapacity()));
            }

            template <bool All>
            inline typename View<All>::Iterator const View<All>::end() const {
                return View<All>::Iterator(mask, static_cast <uint32> (Utility::Singleton<EntityManager>::get().getCapacity()));
            }

        }
    }
