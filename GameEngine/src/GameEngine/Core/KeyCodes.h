#pragma once

namespace GameEngine
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space = 32,
		Apostrophe = 39, /* ' */
		Comma = 44, /* , */
		Minus = 45, /* - */
		Period = 46, /* . */
		Slash = 47, /* / */

		D0 = 48, /* 0 */
		D1 = 49, /* 1 */
		D2 = 50, /* 2 */
		D3 = 51, /* 3 */
		D4 = 52, /* 4 */
		D5 = 53, /* 5 */
		D6 = 54, /* 6 */
		D7 = 55, /* 7 */
		D8 = 56, /* 8 */
		D9 = 57, /* 9 */

		Semicolon = 59, /* ; */
		Equal = 61, /* = */

		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,

		LeftBracket = 91,  /* [ */
		Backslash = 92,  /* \ */
		RightBracket = 93,  /* ] */
		GraveAccent = 96,  /* ` */

		World1 = 161, /* non-US #1 */
		World2 = 162, /* non-US #2 */

		/* Function keys */
		Escape = 256,
		Enter = 257,
		Tab = 258,
		Backspace = 259,
		Insert = 260,
		Delete = 261,
		Right = 262,
		Left = 263,
		Down = 264,
		Up = 265,
		PageUp = 266,
		PageDown = 267,
		Home = 268,
		End = 269,
		CapsLock = 280,
		ScrollLock = 281,
		NumLock = 282,
		PrintScreen = 283,
		Pause = 284,
		F1 = 290,
		F2 = 291,
		F3 = 292,
		F4 = 293,
		F5 = 294,
		F6 = 295,
		F7 = 296,
		F8 = 297,
		F9 = 298,
		F10 = 299,
		F11 = 300,
		F12 = 301,
		F13 = 302,
		F14 = 303,
		F15 = 304,
		F16 = 305,
		F17 = 306,
		F18 = 307,
		F19 = 308,
		F20 = 309,
		F21 = 310,
		F22 = 311,
		F23 = 312,
		F24 = 313,
		F25 = 314,

		/* Keypad */
		KP0 = 320,
		KP1 = 321,
		KP2 = 322,
		KP3 = 323,
		KP4 = 324,
		KP5 = 325,
		KP6 = 326,
		KP7 = 327,
		KP8 = 328,
		KP9 = 329,
		KPDecimal = 330,
		KPDivide = 331,
		KPMultiply = 332,
		KPSubtract = 333,
		KPAdd = 334,
		KPEnter = 335,
		KPEqual = 336,

		LeftShift = 340,
		LeftControl = 341,
		LeftAlt = 342,
		LeftSuper = 343,
		RightShift = 344,
		RightControl = 345,
		RightAlt = 346,
		RightSuper = 347,
		Menu = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// From glfw3.h
#define GE_KEY_SPACE           ::GameEngine::Key::Space
#define GE_KEY_APOSTROPHE      ::GameEngine::Key::Apostrophe    /* ' */
#define GE_KEY_COMMA           ::GameEngine::Key::Comma         /* , */
#define GE_KEY_MINUS           ::GameEngine::Key::Minus         /* - */
#define GE_KEY_PERIOD          ::GameEngine::Key::Period        /* . */
#define GE_KEY_SLASH           ::GameEngine::Key::Slash         /* / */
#define GE_KEY_0               ::GameEngine::Key::D0
#define GE_KEY_1               ::GameEngine::Key::D1
#define GE_KEY_2               ::GameEngine::Key::D2
#define GE_KEY_3               ::GameEngine::Key::D3
#define GE_KEY_4               ::GameEngine::Key::D4
#define GE_KEY_5               ::GameEngine::Key::D5
#define GE_KEY_6               ::GameEngine::Key::D6
#define GE_KEY_7               ::GameEngine::Key::D7
#define GE_KEY_8               ::GameEngine::Key::D8
#define GE_KEY_9               ::GameEngine::Key::D9
#define GE_KEY_SEMICOLON       ::GameEngine::Key::Semicolon     /* ; */
#define GE_KEY_EQUAL           ::GameEngine::Key::Equal         /* = */
#define GE_KEY_A               ::GameEngine::Key::A
#define GE_KEY_B               ::GameEngine::Key::B
#define GE_KEY_C               ::GameEngine::Key::C
#define GE_KEY_D               ::GameEngine::Key::D
#define GE_KEY_E               ::GameEngine::Key::E
#define GE_KEY_F               ::GameEngine::Key::F
#define GE_KEY_G               ::GameEngine::Key::G
#define GE_KEY_H               ::GameEngine::Key::H
#define GE_KEY_I               ::GameEngine::Key::I
#define GE_KEY_J               ::GameEngine::Key::J
#define GE_KEY_K               ::GameEngine::Key::K
#define GE_KEY_L               ::GameEngine::Key::L
#define GE_KEY_M               ::GameEngine::Key::M
#define GE_KEY_N               ::GameEngine::Key::N
#define GE_KEY_O               ::GameEngine::Key::O
#define GE_KEY_P               ::GameEngine::Key::P
#define GE_KEY_Q               ::GameEngine::Key::Q
#define GE_KEY_R               ::GameEngine::Key::R
#define GE_KEY_S               ::GameEngine::Key::S
#define GE_KEY_T               ::GameEngine::Key::T
#define GE_KEY_U               ::GameEngine::Key::U
#define GE_KEY_V               ::GameEngine::Key::V
#define GE_KEY_W               ::GameEngine::Key::W
#define GE_KEY_X               ::GameEngine::Key::X
#define GE_KEY_Y               ::GameEngine::Key::Y
#define GE_KEY_Z               ::GameEngine::Key::Z
#define GE_KEY_LEFT_BRACKET    ::GameEngine::Key::LeftBracket   /* [ */
#define GE_KEY_BACKSLASH       ::GameEngine::Key::Backslash     /* \ */
#define GE_KEY_RIGHT_BRACKET   ::GameEngine::Key::RightBracket  /* ] */
#define GE_KEY_GRAVE_ACCENT    ::GameEngine::Key::GraveAccent   /* ` */
#define GE_KEY_WORLD_1         ::GameEngine::Key::World1        /* non-US #1 */
#define GE_KEY_WORLD_2         ::GameEngine::Key::World2        /* non-US #2 */

/* Function keys */
#define GE_KEY_ESCAPE          ::GameEngine::Key::Escape
#define GE_KEY_ENTER           ::GameEngine::Key::Enter
#define GE_KEY_TAB             ::GameEngine::Key::Tab
#define GE_KEY_BACKSPACE       ::GameEngine::Key::Backspace
#define GE_KEY_INSERT          ::GameEngine::Key::Insert
#define GE_KEY_DELETE          ::GameEngine::Key::Delete
#define GE_KEY_RIGHT           ::GameEngine::Key::Right
#define GE_KEY_LEFT            ::GameEngine::Key::Left
#define GE_KEY_DOWN            ::GameEngine::Key::Down
#define GE_KEY_UP              ::GameEngine::Key::Up
#define GE_KEY_PAGE_UP         ::GameEngine::Key::PageUp
#define GE_KEY_PAGE_DOWN       ::GameEngine::Key::PageDown
#define GE_KEY_HOME            ::GameEngine::Key::Home
#define GE_KEY_END             ::GameEngine::Key::End
#define GE_KEY_CAPS_LOCK       ::GameEngine::Key::CapsLock
#define GE_KEY_SCROLL_LOCK     ::GameEngine::Key::ScrollLock
#define GE_KEY_NUM_LOCK        ::GameEngine::Key::NumLock
#define GE_KEY_PRINT_SCREEN    ::GameEngine::Key::PrintScreen
#define GE_KEY_PAUSE           ::GameEngine::Key::Pause
#define GE_KEY_F1              ::GameEngine::Key::F1
#define GE_KEY_F2              ::GameEngine::Key::F2
#define GE_KEY_F3              ::GameEngine::Key::F3
#define GE_KEY_F4              ::GameEngine::Key::F4
#define GE_KEY_F5              ::GameEngine::Key::F5
#define GE_KEY_F6              ::GameEngine::Key::F6
#define GE_KEY_F7              ::GameEngine::Key::F7
#define GE_KEY_F8              ::GameEngine::Key::F8
#define GE_KEY_F9              ::GameEngine::Key::F9
#define GE_KEY_F10             ::GameEngine::Key::F10
#define GE_KEY_F11             ::GameEngine::Key::F11
#define GE_KEY_F12             ::GameEngine::Key::F12
#define GE_KEY_F13             ::GameEngine::Key::F13
#define GE_KEY_F14             ::GameEngine::Key::F14
#define GE_KEY_F15             ::GameEngine::Key::F15
#define GE_KEY_F16             ::GameEngine::Key::F16
#define GE_KEY_F17             ::GameEngine::Key::F17
#define GE_KEY_F18             ::GameEngine::Key::F18
#define GE_KEY_F19             ::GameEngine::Key::F19
#define GE_KEY_F20             ::GameEngine::Key::F20
#define GE_KEY_F21             ::GameEngine::Key::F21
#define GE_KEY_F22             ::GameEngine::Key::F22
#define GE_KEY_F23             ::GameEngine::Key::F23
#define GE_KEY_F24             ::GameEngine::Key::F24
#define GE_KEY_F25             ::GameEngine::Key::F25

/* Keypad */
#define GE_KEY_KP_0            ::GameEngine::Key::KP0
#define GE_KEY_KP_1            ::GameEngine::Key::KP1
#define GE_KEY_KP_2            ::GameEngine::Key::KP2
#define GE_KEY_KP_3            ::GameEngine::Key::KP3
#define GE_KEY_KP_4            ::GameEngine::Key::KP4
#define GE_KEY_KP_5            ::GameEngine::Key::KP5
#define GE_KEY_KP_6            ::GameEngine::Key::KP6
#define GE_KEY_KP_7            ::GameEngine::Key::KP7
#define GE_KEY_KP_8            ::GameEngine::Key::KP8
#define GE_KEY_KP_9            ::GameEngine::Key::KP9
#define GE_KEY_KP_DECIMAL      ::GameEngine::Key::KPDecimal
#define GE_KEY_KP_DIVIDE       ::GameEngine::Key::KPDivide
#define GE_KEY_KP_MULTIPLY     ::GameEngine::Key::KPMultiply
#define GE_KEY_KP_SUBTRACT     ::GameEngine::Key::KPSubtract
#define GE_KEY_KP_ADD          ::GameEngine::Key::KPAdd
#define GE_KEY_KP_ENTER        ::GameEngine::Key::KPEnter
#define GE_KEY_KP_EQUAL        ::GameEngine::Key::KPEqual

#define GE_KEY_LEFT_SHIFT      ::GameEngine::Key::LeftShift
#define GE_KEY_LEFT_CONTROL    ::GameEngine::Key::LeftControl
#define GE_KEY_LEFT_ALT        ::GameEngine::Key::LeftAlt
#define GE_KEY_LEFT_SUPER      ::GameEngine::Key::LeftSuper
#define GE_KEY_RIGHT_SHIFT     ::GameEngine::Key::RightShift
#define GE_KEY_RIGHT_CONTROL   ::GameEngine::Key::RightControl
#define GE_KEY_RIGHT_ALT       ::GameEngine::Key::RightAlt
#define GE_KEY_RIGHT_SUPER     ::GameEngine::Key::RightSuper
#define GE_KEY_MENU            ::GameEngine::Key::Menu