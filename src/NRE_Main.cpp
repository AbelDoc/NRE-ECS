
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
                    comp.x += comp.y;
                    comp.y += comp.z;
                    comp.z *= 2;
                });
            }
    };

    int main(int, char**) {
        Singleton<SystemManager>::get().add<TestSystem>();
        
        for (int i = 0; i < 100'000; i++) {
            Entity e = Singleton<EntityManager>::get().create();
            e.assign<TestComponent>(i, i, i);
        }
        std::cout << "Creation Done" << std::endl;
        
        Singleton<SystemManager>::get().configure();
        Singleton<SystemManager>::get().updateAll();

        return 0;
    }
