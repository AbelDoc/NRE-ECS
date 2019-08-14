
    /**
     * @file NRE_AbstractComponent.hpp
     * @brief Declaration of ECS's API Object : AbstractComponent
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>

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
             * @class AbstractComponent
             * @brief Base for template component
             */
            class AbstractComponent {
                public:     //Fields
                    constexpr static const std::size_t MAX_COMPONENTS = 64; /**< The maximum number of component per entity */
                    /** Shortcut to hide the Category type */
                    typedef std::size_t Category;

                public:    // Methods
                    /**
                     * Delete operator
                     * @param  ptr a pointer on the data to destroy
                     */
                    void operator delete(void* ptr) = delete;
                    /**
                     * Array Delete operator
                     * @param  ptr a pointer on the data to destroy
                     */
                    void operator delete[](void* ptr) = delete;

                protected:  // Static
                    static Category counter;    /**< The category counter */

            };
        }
    }
