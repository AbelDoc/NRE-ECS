
    /**
     * @file NRE_Main.cpp
     * @brief Test of ECS's API
     * @author Louis ABEL
     * @date 20/10/2019
     * @copyright CC-BY-NC-SA
     */

    #include "Header/NRE_ECS.hpp"

    using namespace NRE::Utility;
    using namespace NRE::ECS;
    
    struct TestComponent {
        public :
            int x;
            int y;
            int z;
            
            TestComponent(int nx, int ny, int nz) : x(nx), y(ny), z(nz) {
            }
    };
    
    class TestSystem : public System<TestSystem> {
        public :
            TestSystem() {
                std::cout << "Create" << std::endl;
            }
            
            void update() override {
                Singleton<EntityManager>::get().each<TestComponent>([this](Entity, TestComponent& comp) {
                    std::cout << comp.x << std::endl;
                    comp.x += comp.y;
                    comp.y += comp.z;
                    comp.z *= 2;
                });
            }
    };

    int main(int, char**) {
        Singleton<SystemManager>::get().add<TestSystem>();
        
        Entity e1 = Singleton<EntityManager>::get().create();
        Entity e2 = Singleton<EntityManager>::get().create();
        Entity e3 = Singleton<EntityManager>::get().create();
        Entity e4 = Singleton<EntityManager>::get().create();
        Entity e5 = Singleton<EntityManager>::get().create();
        
        e1.assign<TestComponent>(1, 1, 1);
        e2.assign<TestComponent>(2, 2, 2);
        e3.assign<TestComponent>(3, 3, 3);
        e4.assign<TestComponent>(4, 4, 4);
        e5.assign<TestComponent>(5, 5, 5);
        
        Singleton<SystemManager>::get().configure();
        Singleton<SystemManager>::get().updateAll();

        return 0;
    }
