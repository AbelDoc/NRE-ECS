
    /**
     * @file NRE_UnpackingView.hpp
     * @brief Declaration of ECS's API Object : UnpackingView
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>

    #include "../../NRE_ViewIterator.hpp"

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
             * @class UnpackingView
             * @brief A view iterator with unpacking manner
             */
            template <class ... Components>
            class UnpackingView {
                public:
                    /**
                     * @class Unpacker
                     * @brief Used to unpack a tuple
                     */
                    class Unpacker {
                        private: // Fields
                            std::tuple<ComponentHandle<Components>& ...> handles;   /**< The tuple with component handle */

                        public: // Methods
                            //## Constructor ##//
                                /**
                                 * Construct an unpacker from a list of component handle
                                 * @param h the component handle pack
                                 */
                                Unpacker(ComponentHandle<Components>& ... h) : handles(std::tuple<ComponentHandle<Components>& ...>(h...)) {
                                }

                            //## Methods ##//
                                /**
                                 * Unpack an entity components
                                 * @param e the entity to unpack
                                 */
                                void unpack(Entity& e) const {
                                    auxUnpack<0, Components...>(e);
                                }

                        private: // Methods
                            //## Methods ##//
                                /**
                                 * Auxiliary function to unpack a single component
                                 * @param e the entity to unpack
                                 */
                                template <int N, class C>
                                void auxUnpack(Entity& e) const {
                                    std::get<N>(handles) = e.getComponent<C>();
                                }
                                /**
                                 * Auxiliary function to unpack a list of component
                                 * @param e the entity to unpack
                                 */
                                template <int N, class C0, class C1, class ... Cn>
                                void auxUnpack(Entity& e) const {
                                    std::get<N>(handles) = e.getComponent<C0>();
                                    auxUnpack<N + 1, C1, Cn...>(e);
                                }
                    };
                private:    //Fields
                    EntityManager::ComponentMask mask;  /**< The view's component mask */
                    Unpacker unpacker;                  /**< The view's unpacker */

                public:     //Fields
                    /**
                     * @class Iterator
                     * @brief A view iterator used to wrap the unpacker behavior
                     */
                    class Iterator : public ViewIterator<Iterator> {
                        private:    //Fields
                            Unpacker const& unpacker;   /**< The iterator's unpacker */

                        public:
                            //## Constructor ##//
                                /**
                                 * Default constructor
                                 */
                                Iterator() = delete;
                                /**
                                 * Construct an iterator with a component mask, an entity index and an unpacker
                                 * @param m the entity's component mask
                                 * @param i the entity's index
                                 * @param p the unpacker
                                 */
                                Iterator(EntityManager::ComponentMask const m, uint32 i, Unpacker const& p) : ViewIterator<Iterator>(m, i), unpacker(p) {
                                    ViewIterator<Iterator>::next();
                                }
                            //## Methods ##//
                                /**
                                 * Unpack the next entity
                                 * @param e the entity to unpack
                                 */
                                void nextEntity(Entity& e) {
                                    unpacker.unpack(e);
                                }
                    };

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        UnpackingView() = delete;
                        /**
                         * Construct an unpacking view from a component mask and a set of component handles
                         * @param m the entity's component mask
                         * @param h the component handles pack
                         */
                        UnpackingView(EntityManager::ComponentMask m, ComponentHandle<Components>& ... h) : mask(m), unpacker(h...) {
                        }

                    //## Methods ##//
                        /**
                         * Begin iterator
                         * @return an iterator on the begin
                         */
                        Iterator begin() {
                            return Iterator(mask, 0, unpacker);
                        }
                        /**
                         * Const Begin iterator
                         * @return an iterator on the begin
                         */
                        Iterator const begin() const {
                            return Iterator(mask, 0, unpacker);
                        }
                        /**
                         * End iterator
                         * @return an iterator on the end
                         */
                        Iterator end() {
                            return Iterator(mask, static_cast <uint32> (Core::Singleton<EntityManager>::get().getCapacity()), unpacker);
                        }
                        /**
                         * Const End iterator
                         * @return an iterator on the end
                         */
                        Iterator const end() const {
                            return Iterator(mask, static_cast <uint32> (Core::Singleton<EntityManager>::get().getCapacity()), unpacker);
                        }

            };
        }
    }
