#include <GameEngine.h>
#include <GameEngine/Core/Entrypoint.h>

#include <imgui/imgui.h>

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Sandbox2D.h"
#include "ExampleLayer.h"

class Sandbox : public GameEngine::Application
{
public:
	Sandbox()
	{
		//PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{
	}
};

GameEngine::Application* GameEngine::CreateApplication()
{
	return new Sandbox();
}