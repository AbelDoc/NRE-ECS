
    /**
     * @file NRE_Main.cpp
     * @brief Test of ECS's API
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    #include "Header/NRE_ECS.hpp"

    using namespace NRE::Utility;
    using namespace NRE::ECS;

    int main(int, char**) {

        Singleton<EntityManager>::get();

        return 0;
    }
