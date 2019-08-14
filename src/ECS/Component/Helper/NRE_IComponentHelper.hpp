
    /**
     * @file NRE_IComponentHelper.hpp
     * @brief Declaration of ECS's API Object : IComponentHelper
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>

    #include "../../Entity/NRE_Entity.hpp"

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
             * @class IComponentHelper
             * @brief Interface for component helper
             */
            class IComponentHelper {
                public:    // Methods
                    //## Deconstructor ##//
                        /**
                         * IComponentHelper Deconstructor
                         */
                        virtual ~IComponentHelper() = default;

                    //## Methods ##//
                        /**
                         * Remove the component from the entity
                         * @param e the entity to remove the component
                         */
                        virtual void removeComponent(Entity e) = 0;

            };
        }
    }
