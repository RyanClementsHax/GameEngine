#include "gepch.h"
#include "RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace GameEngine {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}