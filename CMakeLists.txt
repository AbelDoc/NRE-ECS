cmake_minimum_required(VERSION 3.15)
project(NRE_ECS)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wno-virtual-move-assign -Wall -Wextra -Wfatal-errors -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -std=c++17")

include_directories(C:/Users/abell/Documents/GitHub/NRE-Utility/src)

include_directories(src/ECS/Component)
include_directories(src/ECS/Component/Handle)
include_directories(src/ECS/Component/Helper)
include_directories(src/ECS/Entity)
include_directories(src/ECS/Entity/Id)
include_directories(src/ECS/Entity/Manager)
include_directories(src/ECS/Entity/Manager/Allocator)
include_directories(src/ECS/Entity/Manager/Iterator)
include_directories(src/ECS/Entity/Manager/Iterator/View)
include_directories(src/ECS/Entity/Manager/Iterator/View/Typed)
include_directories(src/ECS/Entity/Manager/Iterator/View/Unpacking)
include_directories(src/ECS/System)
include_directories(src/ECS/System/Manager)
include_directories(src/Header)

set(COMPILE_LIST
        src/ECS/Component/Handle/NRE_ComponentHandle.hpp
        src/ECS/Component/Helper/NRE_ComponentHelper.hpp
        src/ECS/Component/Helper/NRE_IComponentHelper.hpp
        src/ECS/Component/NRE_AbstractComponent.cpp
        src/ECS/Component/NRE_AbstractComponent.hpp
        src/ECS/Component/NRE_Component.hpp
        src/ECS/Entity/Id/NRE_Id.hpp
        src/ECS/Entity/Manager/Allocator/NRE_AbstractAllocator.hpp
        src/ECS/Entity/Manager/Allocator/NRE_PoolAllocator.hpp
        src/ECS/Entity/Manager/Iterator/View/Typed/NRE_TypedView.hpp
        src/ECS/Entity/Manager/Iterator/View/Unpacking/NRE_UnpackingView.hpp
        src/ECS/Entity/Manager/Iterator/View/NRE_View.hpp
        src/ECS/Entity/Manager/Iterator/NRE_ViewIterator.hpp
        src/ECS/Entity/Manager/NRE_EntityManager.cpp
        src/ECS/Entity/Manager/NRE_EntityManager.hpp
        src/ECS/Entity/NRE_Entity.cpp
        src/ECS/Entity/NRE_Entity.hpp
        src/ECS/System/Manager/NRE_SystemManager.hpp
        src/ECS/System/Manager/NRE_SystemManager.tpp
        src/ECS/System/NRE_AbstractSystem.cpp
        src/ECS/System/NRE_AbstractSystem.hpp
        src/ECS/System/NRE_System.hpp
        src/Header/NRE_ECS.hpp)

set(EXEC_LIST
        ${COMPILE_LIST}
        src/NRE_Main.cpp)

add_executable(NRE_ECS ${EXEC_LIST})

add_library(NRE-ECS ${COMPILE_LIST})
