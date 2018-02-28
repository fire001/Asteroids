#pragma once
#ifndef _BULLET_HPP_
#define  _BULLET_HPP_

#include "Entidades.hpp"
#include "Vector2.hpp"
#include "MathUtilities.hpp"
#include "PlayerShip.h"

namespace Herramientas
{
	namespace Asteroids
	{
		class Bullet
		{
		public:

			Bullet();
			~Bullet();
			Bullet(Engine::Math::Vector2, Engine::Math::Vector2, float, const int, const int);

			void Render();
			void Update(float);

			int		m_bulletLife;
			float	m_mass;
			float	m_radius;
			float	m_angle;
			float	m_angleInRads;
			float	m_width;
			float	m_height;
			Engine::Math::Vector2	m_velocity;
			Engine::Math::Vector2	m_position;
		};
	}
}
#endif // !_BULLET_HPP_