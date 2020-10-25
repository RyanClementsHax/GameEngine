#include "gepch.h"
#include "GameEngine/Core/Window.h"

#ifdef GE_PLATFORM_WINDOWS
	#include "Platform/Windows/WindowsWindow.h"
#endif

namespace GameEngine {

	Scope<Window> Window::Create(const WindowProps& props)
	{
	#ifdef GE_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
	#else
		GE_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
	#endif
	}

}