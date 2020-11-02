#pragma once

#include "GameEngine/Core/Base.h"
#include "GameEngine/Core/Log.h"
#include "GameEngine/Scene/Scene.h"
#include "GameEngine/Scene/Entity.h"

namespace GameEngine {

	class SceneHierarchyPanel
	{
	public:
		SceneHierarchyPanel() = default;
		SceneHierarchyPanel(const Ref<Scene>& scene);

		void SetContext(const Ref<Scene>& scene);

		void OnImGuiRender();
	private:
		void DrawEntityNode(Entity entity);
		void DrawComponents(Entity entity);
	private:
		Ref<Scene> m_Context;
		Entity m_SelectionContext;
	};

}
