
    /**
     * @file NRE_View.hpp
     * @brief Declaration of ECS's API Object : View
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>

    #include "../NRE_ViewIterator.hpp"

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
             * @class View
             * @brief Base view for advanced iterator
             */
            template <bool All>
            class View {
                private:    //Fields
                    EntityManager::ComponentMask mask;  /**< The view's component mask */

                public:     //Fields
                    /**
                     * @class Iterator
                     * @brief A basic view iterator
                     */
                    class Iterator : public ViewIterator<Iterator, All> {
                    public: // Fields
                        //## Constructor ##//
                            /**
                             * Default constructor
                             */
                            Iterator() = delete;
                            /**
                             * Construct an iterator with a component mask and an entity index
                             * @param m the entity's component mask
                             * @param i the entity's index
                             */
                            Iterator(EntityManager::ComponentMask const m, uint32 i) : ViewIterator<Iterator, All>(m, i) {
                                ViewIterator<Iterator, All>::next();
                            }
                            /**
                             * Access the next entity
                             */
                            void nextEntity(Entity&) {
                            }
                    };

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        View();
                        /**
                         * Create a view from a component mask
                         * @param m the view's component mask
                         */
                        View(EntityManager::ComponentMask m);

                    //## Deconstructor ##//
                        /**
                         * View Deconstructor
                         */
                        virtual ~View() = default;

                    //## Methods ##//
                        /**
                         * Begin iterator
                         * @return an iterator on the begin
                         */
                        Iterator begin();
                        /**
                         * Const Begin iterator
                         * @return an iterator on the begin
                         */
                        Iterator const begin() const;
                        /**
                         * End iterator
                         * @return an iterator on the end
                         */
                        Iterator end();
                        /**
                         * Const End iterator
                         * @return an iterator on the end
                         */
                        Iterator const end() const;

            };
        }
    }

    #include "NRE_View.tpp"
