#pragma once

#include "Core.h"

#include "Window.h"
#include "GameEngine/LayerStack.h"
#include "GameEngine/Events/Event.h"
#include "GameEngine/Events/ApplicationEvent.h"

#include "GameEngine/ImGui/ImGuiLayer.h"

#include "GameEngine/Renderer/Shader.h"

namespace GameEngine {
	class GAME_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);

		inline Window& GetWindow() { return *m_Window; }

		inline static Application& Get() { return *s_Instance; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		LayerStack m_LayerStack;

		unsigned int m_VertexArray, m_VertexBuffer, m_IndexBuffer;
		std::unique_ptr<Shader> m_Shader;
	private:
		static Application* s_Instance;
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

