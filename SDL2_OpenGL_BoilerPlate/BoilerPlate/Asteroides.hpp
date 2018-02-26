#pragma once

#include "Entidades.hpp"
#include "Vector2.hpp"
#include "MathUtilities.hpp"

namespace Asteroides
{
	enum AsteroidsSize { BIG_SIZE = 0, MEDIUM_SIZE = 1, SMALL_SIZE = 2 };
	namespace Entidades
	{
		class Asteroides
		{
		public:
				Asteroides(const int, const int);
				Asteroides(AsteroidsSize, Engine::Math::Vector2, const int, const int);
				void Render();
				void Update(float);
				void randomAngle(float, float);
				AsteroidsSize getSize() const { return m_size; };
				
		private:
			void						sizeFactor();
			Engine::Math::Vector2*			m_position;
			float							m_height;
			float							m_width;
			float							m_angle;
			float							m_mass;
			float							m_radius;
			float							m_angleInRads;
			Engine::Math::Vector2			m_velocity;
			AsteroidsSize				    m_size;

		};
	}
}
