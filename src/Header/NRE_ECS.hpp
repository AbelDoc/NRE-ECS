
    /**
     * @file Header/NRE_ECS.hpp
     * @brief Declaration of Engine's ECS's Header
     * @author Louis ABEL
     * @date 12/08/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "../ECS/Entity/Id/NRE_Id.hpp"
    #include "../ECS/Component/NRE_AbstractComponent.hpp"
    #include "../ECS/Entity/Manager/NRE_EntityManager.hpp"
    #include "../ECS/Entity/NRE_Entity.hpp"
    #include "../ECS/Entity/Manager/Iterator/NRE_ViewIterator.hpp"
    #include "../ECS/Entity/Manager/Iterator/View/NRE_View.hpp"
    #include "../ECS/Entity/Manager/Iterator/View/Typed/NRE_TypedView.hpp"
    #include "../ECS/Entity/Manager/Iterator/View/Unpacking/NRE_UnpackingView.hpp"

    #include "../ECS/Component/NRE_Component.hpp"
    #include "../ECS/Component/Handle/NRE_ComponentHandle.hpp"
    #include "../ECS/Component/Helper/NRE_ComponentHelper.hpp"

    #include "../ECS/System/NRE_AbstractSystem.hpp"
    #include "../ECS/System/NRE_System.hpp"
    #include "../ECS/System/Manager/NRE_SystemManager.hpp"
