
    /**
     * @file NRE_Id.hpp
     * @brief Declaration of ECS's API Object : Id
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <string>
    #include <cstdint>

     /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /** Shortcut typedef for 32-bits unsigned int */
        typedef std::uint32_t uint32;
        /** Shortcut typedef for 64-bits unsigned int */
        typedef std::uint64_t uint64;

        /**
         * @namespace ECS
         * @brief ECS's API
         */
        namespace ECS {

            /**
             * @class Id
             * @brief An entity Id
             */
            class Id {
                private:    //Fields
                    uint64 id;  /**< The id */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Id();
                        /**
                         * Construct an id from a packed 64 bits id index/version
                         * @param i the packed id
                         */
                        Id(uint64 i);
                        /**
                         * Construct an id from a separated index/version
                         * @param index   the id's index
                         * @param version the id's version
                         */
                        Id(uint32 index, uint32 version);

                    //## Copy-Constructor ##//
                        /**
                         * Copy i into this
                         * @param i the id to copy the content
                         */
                        Id(Id const& i) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move i into this, leaving i empty
                         * @param i the id to move
                         */
                        Id(Id && i) = default;

                    //## Deconstructor ##//
                        /**
                         * Id Deconstructor
                         */
                        ~Id() = default;

                    //## Getter ##//
                        /**
                         * Id getter
                         * @return the id
                         */
                        uint64 const& getId() const;
                        /**
                         * Index getter
                         * @return the id's index
                         */
                        uint32 getIndex() const;
                        /**
                         * Version getter
                         * @return the id's version
                         */
                        uint32 getVersion() const;

                    //## Assignment Operator ##//
                        /**
                         * Copy assignment of i into this
                         * @param i the id to copy into this
                         * @return      the reference of himself
                         */
                        Id& operator =(Id const& i) = default;
                        /**
                         * Move assignment of i into this, leaving i empty
                         * @param i the id to move into this
                         * @return      the reference of himself
                         */
                        Id& operator =(Id && i) = default;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and i
                         * @param i the Id to test with this
                         * @return  the test's result
                         */
                        bool operator ==(Id const& i) const;
                        /**
                         * Difference test between this and i
                         * @param i the Id to test with this
                         * @return  the test's result
                         */
                        bool operator !=(Id const& i) const;
                        /**
                         * Inferior test between this and i
                         * @param i the Id to test with this
                         * @return  the test's result
                         */
                        bool operator <(Id const& i) const;

            };
        }
    }

    #include "NRE_Id.tpp"
