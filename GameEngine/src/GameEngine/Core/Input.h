#pragma once

#include <glm/glm.hpp>

#include "GameEngine/Core/Base.h"
#include "GameEngine/Core/KeyCodes.h"
#include "GameEngine/Core/MouseCodes.h"

namespace GameEngine {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static glm::vec2 GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};

}

