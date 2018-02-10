#pragma once
#include "vector3.h"

namespace Colors
{
	static class Color
	{
	public:
		Color();
		Color(int, int, int);
		~Color();

	private:
		Engine::Math::Vector3 m_color;
	};
}
