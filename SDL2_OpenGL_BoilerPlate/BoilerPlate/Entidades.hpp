#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

#include "MathUtilities.hpp"
#include "Vector2.hpp"
#include "Vector3.h"

namespace Herramientas
{
	const float Thrust = 1.25f;
	const float angle_offset = 90.0f;
	// asteroides
	const int Max_Points = 12;
	const float Min_Size = 25.f;
	const float Max_Size = 45.f;

	// nave
	const int Max_Ship_Speed = 10.f;

	namespace Asteroides
	{
		class Entidades
		{
		public:
			Entidades();
			Entidades(int width, int height);
			~Entidades();
			void translate(Engine::Math::Vector2 pos) { m_position = pos; };
			void Update();
			void Render();
			float warping(float, float, float);

		private:

			//members
			float m_position;
			float m_mass;
			float m_angle;
			float m_angleInRads;
			int		m_width;
			int		m_height;
			Engine::Math::Vector2		m_velocity;
			Engine::Math::Vector2		m_position;
			Engine::Math::Vector3		m_color;
		};

	}
}