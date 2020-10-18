#include "gepch.h"
#include "RendererCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace GameEngine {

	Scope<RendererAPI> RendererCommand::s_RendererAPI = CreateScope<OpenGLRendererAPI>();

}