
    /**
     * @file NRE_ComponentHelper.hpp
     * @brief Declaration of ECS's API Object : ComponentHelper
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>

    #include "NRE_IComponentHelper.hpp"

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
             * @class ComponentHelper
             * @brief Helper class to perform component operations
             */
            template <class T>
            class ComponentHelper : public IComponentHelper {
                public:    // Methods
                    //## Methods ##//
                        /**
                         * Remove the component from the entity
                         * @param e the entity to remove the component
                         */
                        void removeComponent(Entity e) override {
                            e.remove<T>();
                        }

            };
        }
    }
