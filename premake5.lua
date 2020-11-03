include "./vendor/premake/premake_customization/solution_items.lua"

workspace "GameEngine"
	architecture "x86_64"
	startproject "Sandbox"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items
	{
		".editorconfig"
	}
	
	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "%{wks.location}/GameEngine/vendor/GLFW/include"
IncludeDir["Glad"] = "%{wks.location}/GameEngine/vendor/Glad/include"
IncludeDir["ImGui"] = "%{wks.location}/GameEngine/vendor/imgui"
IncludeDir["glm"] = "%{wks.location}/GameEngine/vendor/glm"
IncludeDir["stb_image"] = "%{wks.location}/GameEngine/vendor/stb_image"
IncludeDir["entt"] = "%{wks.location}/GameEngine/vendor/entt/include"
IncludeDir["yaml_cpp"] = "%{wks.location}/GameEngine/vendor/yaml-cpp/include"

group "Dependencies"
	include "vendor/premake"
	include "GameEngine/vendor/GLFW"
	include "GameEngine/vendor/Glad"
	include "GameEngine/vendor/imgui"
	include "GameEngine/vendor/yaml-cpp"
group ""

include "GameEngine"
include "Sandbox"
include "GameEngine-Editor"
