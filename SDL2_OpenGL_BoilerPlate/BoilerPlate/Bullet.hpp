#pragma once
#ifndef _BULLET_HPP_
#define  _BULLET_HPP_

#include "Entidades.hpp"
#include "Vector2.hpp"
#include "MathUtilities.hpp"

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

			int BulletLife;
		};
	}
}
#endif // !_BULLET_HPP_