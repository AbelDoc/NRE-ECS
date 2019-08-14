
    /**
     * @file NRE_Component.hpp
     * @brief Declaration of ECS's API Object : Component
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>

    #include "NRE_AbstractComponent.hpp"
    #include "Handle/NRE_ComponentHandle.hpp"

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
             * @class Component
             * @brief Base component for user defined component
             */
            template <class T>
            class Component : public AbstractComponent {
                public:     // Static
                    /**
                     * Category getter
                     * @return the T component category
                     */
                    static Category getCategory() {
                        static Category category = counter++;
                        assert(category < AbstractComponent::MAX_COMPONENTS);
                        return category;
                    }

            };
        }
    }
