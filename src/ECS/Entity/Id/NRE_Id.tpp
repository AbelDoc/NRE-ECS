
    /**
     * @file NRE_Id.hpp
     * @brief Implementation of ECS's API Object : Id
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace ECS {

                inline Id::Id() : id(0) {
                }

                inline Id::Id(uint64 i) : id(i) {
                }

                inline Id::Id(uint32 index, uint32 version) : id(static_cast <uint64> (index) | static_cast <uint64> (version) << 32UL) {
                }

                inline uint64 Id::getId() const {
                    return id;
                }

                inline uint32 Id::getIndex() const {
                    return static_cast <uint32> (id & 0xFFFFFFFFUL);
                }

                inline uint32 Id::getVersion() const {
                    return static_cast <uint32> (id >> 32);
                }

                inline bool Id::operator ==(Id const& i) const {
                    return i.id == id;
                }

                inline bool Id::operator !=(Id const& i) const {
                    return !(i == *this);
                }

                inline bool Id::operator <(Id const& i) const {
                    return i.id < id;
                }

        }
    }
