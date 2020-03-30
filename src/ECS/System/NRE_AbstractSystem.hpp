
    /**
     * @file NRE_AbstractSystem.hpp
     * @brief Declaration of ECS's API Object : AbstractSystem
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>
    #include <memory>

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
             * @class AbstractSystem
             * @brief Base class for template system
             */
            class AbstractSystem {
                public:     //Fields
                    /** Shortcut to hide the Category type */
                    typedef std::size_t Category;

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        AbstractSystem() = default;
                
                    //## Copy-Constructor ##//
                        /**
                         * Copy forbidden
                         * @param s the abstract system to copy
                         */
                        AbstractSystem(AbstractSystem const& s) = delete;

                    //## Deconstructor ##//
                        /**
                         * AbstractSystem Deconstructor
                         */
                        virtual ~AbstractSystem() = default;

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param s the abstract system to copy
                         */
                        AbstractSystem& operator=(AbstractSystem const& s) = delete;

                    //## Methods ##//
                        /**
                         * Configure the system, called once before any rendering or update
                         */
                        virtual void configure() {
                        }
                        /**
                         * Update the system
                         */
                        virtual void update() = 0;

                public:     // Static
                    static Category counter;    /**< The category counter */

            };
        }
    }
