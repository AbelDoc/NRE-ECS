
    /**
     * @file NRE_EntityManager.hpp
     * @brief Implementation of ECS's API Object : EntityManager
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_EntityManager.hpp"
    #include "../NRE_Entity.hpp"
    #include "Iterator/View/Typed/NRE_TypedView.hpp"
    #include "../../Component/Helper/NRE_IComponentHelper.hpp"

    namespace NRE {
        namespace ECS {

            DebugView EntityManager::getEntitiesForDebugging() {
                return DebugView();
            }

            Entity EntityManager::create() {
                uint32 index, version;
                if (freeList.isEmpty()) {
                    index = counter++;
                    accommodateEntity(index);
                    version = entityVersion[index] = 1;
                } else {
                    index = freeList.getLast();
                    freeList.popBack();
                    version = entityVersion[index];
                }
                return Entity(Id(index, version));
            }

            void EntityManager::destroy(Id id) {
                assertValid(id);
                uint32 index = id.getIndex();
                auto mask = entityComponentMask[index];
                for (std::size_t i = 0; i < componentsHelper.getSize(); i++) {
                    IComponentHelper* helper = componentsHelper[i];
                    if (helper && mask.test(i)) {
                        helper->removeComponent(Entity(id));
                    }
                }
                entityComponentMask[index].reset();
                entityVersion[index]++;
                freeList.pushBack(index);
            }

            void EntityManager::reset() {
                for (Entity e : getEntitiesForDebugging()) {
                    e.destroy();
                }
                for (AbstractAllocator* pool : componentPools) {
                    delete pool;
                    pool = nullptr;
                }
                for (IComponentHelper* helper : componentsHelper) {
                    delete helper;
                    helper = nullptr;
                }
                componentPools.clear();
                componentsHelper.clear();
                entityComponentMask.clear();
                entityVersion.clear();
                freeList.clear();
                counter = 0;
            }

            void EntityManager::accommodateEntity(uint32 index) {
                if (entityComponentMask.getSize() <= index) {
                    entityComponentMask.resize(index + 1);
                    entityVersion.resize(index + 1);
                    for (AbstractAllocator* pool : componentPools) {
                        if (pool) {
                            pool->expand(index + 1);
                        }
                    }
                }
            }

            Entity EntityManager::get(Id id) {
                assertValid(id);
                return Entity(id);
            }

        }
    }
