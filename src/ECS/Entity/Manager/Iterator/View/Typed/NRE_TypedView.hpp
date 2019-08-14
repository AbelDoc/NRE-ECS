
    /**
     * @file NRE_TypedView.hpp
     * @brief Declaration of ECS's API Object : TypedView
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>

    #include "../NRE_View.hpp"

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
             * @class TypedView
             * @brief A typed view
             */
            template <bool All, class ... Components>
            class TypedView : public View<All> {
                public:     //Fields
                    /**
                     * @struct identity
                     * @brief Used for meta programming
                     */
                    template <class T>
                    struct identity {
                        /** Typedef for meta programming */
                        typedef T type;
                    };

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        TypedView() = default;
                        /**
                         * Construct a typed view from a component mask
                         * @param m the component mask
                         */
                        TypedView(EntityManager::ComponentMask m) : View<All>(m) {
                        }

                    //## Methods ##//
                        /**
                         * A for each loop on the typed view element
                         * @param f a lambda to apply
                         */
                        void each(typename identity<std::function<void(Entity e, Components& ...)>>::type f) {
                            for (auto it : *this) {
                                f(it, *(it.template getComponent<Components>().get())...);
                            }
                        }

            };
        }
    }
