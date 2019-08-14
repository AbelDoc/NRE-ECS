
    /**
     * @file NRE_SystemManager.hpp
     * @brief Declaration of ECS's API Object : SystemManager
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <cassert>
    #include <bitset>
    #include <memory>

    #include <Header/NRE_Utility.hpp>

    #include "../NRE_System.hpp"

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
             * @class SystemManager
             * @brief Manage system storing and update
             */
            class SystemManager : public Utility::Singleton<SystemManager> {
                friend Utility::Singleton<SystemManager>;
                private:    //Fields
                    constexpr static int MAX_SYSTEM = 32;                       /**< The max number of systems */
                    bool initialized;                                           /**< Tell if the manager is initialized */
                    Utility::Vector<std::unique_ptr<AbstractSystem>> systems;   /**< The manager's systems */
                    std::bitset<MAX_SYSTEM> mask;                               /**< The bitset to tell if a systems has been stored */

                public:    // Methods
                    //## Getter ##//
                        /**
                         * System getter
                         * @return the T systems
                         */
                        template <class T>
                        T* getSystem();

                    //## Methods ##//
                        /**
                         * Add a system to the manager
                         * @param args the system's construction arguments
                         */
                        template <class T, class ... Args>
                        void add(Args && ... args);
                        /**
                         * Update the T system
                         */
                        template <class T>
                        void update();
                        /**
                         * Update all stored systems
                         */
                        void updateAll();
                        /**
                         * Configure all stored systems and set the initialized state to true
                         */
                        void configure();

                private:   // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        SystemManager();

                public:     // Static
                    /**
                     * System getter
                     * @return the T systems
                     */
                    template <class T>
                    static T* get();

            };
        }
    }

    #include "NRE_SystemManager.tpp"
