#pragma once

#include "Core.h"

#include "Window.h"
#include "GameEngine/LayerStack.h"
#include "GameEngine/Events/Event.h"
#include "GameEngine/Events/ApplicationEvent.h"

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
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

