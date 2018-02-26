#pragma once

#ifndef _ENTIDADES_HPP
#define _ENTIDADES_HPP

#include <iostream>

#include "MathUtilities.hpp"
#include "Vector2.hpp"
#include "Vector3.h"


namespace Herramientas
{
	const float Thrust = 1.20f;
	const float angle_offset = 90.0f;
	const float Drag = 0.9f;
	// asteroides
	const int Max_Points = 12;
	const float MIN_SIZE = 25.f;
	const float MAX_SIZE = 45.f;
	const float MAX_BIG_ASTEROID_SPEED = 3.f;
	const float MAX_MEDIUM_ASTEROID_SPEED = 3.125F;
	const float MAX_SMALL_ASTEROID_SPEED = 3.25f;

	// nave
	const int MAX_BULLETS = 5;
	const int Max_Ship_Speed = 10.f;
	//bullets
	const int MAX_BULLET_SPEED = 5.f;
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
		void Render();
		void Impulse();
		float warping(float m_x, float min, float max);
		virtual void ApplyImpulse(float m_x, float m_y);
		virtual void DrawCircle(float);
		bool isColliding(Entidades*);
	protected:
		virtual void clampSpeed(float);
		void RandomPosition(float m_yMax, float m_xMax);

	private:

		//members
		float m_x;
		float m_max;
		float m_min;
		float						m_mass;
		float						m_angle;
		float						m_angleInRads;
		Engine::Math::Vector2		m_velocity;
		Engine::Math::Vector2		m_position;
		float						m_maxwidth;
		float						m_minwidth;
		float						m_maxheight;
		float						m_minheight;
		float						m_width;
		float						m_height;
		float						m_thrust;
		float					    m_rotate;
		float						m_radius;
		float						ConvertRadToDegrees(float);
		float						ConvertDegreesToRad(float);
		float						m_state;
		float						m_x;
		float					    m_y;
	};

}
#endif // !_ENTIDADES_HPP_
