#include "gepch.h"
#include "RendererCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace GameEngine {

	RendererAPI* RendererCommand::s_RendererAPI = new OpenGLRendererAPI();

}