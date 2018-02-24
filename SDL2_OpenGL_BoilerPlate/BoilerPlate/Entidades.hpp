#pragma once
#pragma once
#ifndef _ENTIDADES_HPP
#define _ENTIDADES_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

#include "MathUtilities.hpp"
#include "Vector2.hpp"
#include "Vector3.h"
#include "PlayerShip.h"

namespace Herramientas
{
	const float Thrust = 1.25f;
	const float angle_offset = 90.0f;
	const float Drag = 0.9f;
	// asteroides
	const int Max_Points = 12;
	const float MIN_SIZE = 25.f;
	const float MAX_SIZE = 45.f;

	// nave
	const int Max_Ship_Speed = 10.f;
}
namespace Asteroids
{
	class Entidades
	{
	public:
		Entidades();
		Entidades(int, int);

		void translate(Engine::Math::Vector2 m_position);
		void Update(float halfTime);
		float Render();
		float warping(float m_x, float min, float max);
		float rotate(float newAngle);
		//float warping(float, float, float);
		virtual void ApplyImpulse(float m_x, float m_y);

	protected:

		//funtions
		Engine::Math::Vector2 Impulse();
		virtual void ApplyImpulse() { m_velocity += Impulse(); };

		//members

		float						m_mass;
		float						m_angle;
		float						m_angleInRads;
		int							m_width;
		int							m_height;
		Engine::Math::Vector2		m_velocity;
		Engine::Math::Vector2		m_position;
		Engine::Math::Vector3		m_color;
		float						m_maxwidth;
		float						m_minwidth;
		float						m_maxheight;
		float						m_minheight;
	};

}
#endif // !_ENTIDADES_HPP_
