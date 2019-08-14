
    /**
     * @file NRE_System.hpp
     * @brief Declaration of ECS's API Object : System
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>

    #include "NRE_AbstractSystem.hpp"

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
             * @class System
             * @brief Base class for user defined system
             */
            template <class T>
            class System : public AbstractSystem {
                public:    // Methods
                    //## Deconstructor ##//
                        /**
                         * System Deconstructor
                         */
                        virtual ~System() = default;

                public:     // Static
                    /**
                     * Category getter
                     * @return the T system category
                     */
                    static Category getCategory() {
                        static Category category = counter++;
                        return category;
                    }

            };
        }
    }
