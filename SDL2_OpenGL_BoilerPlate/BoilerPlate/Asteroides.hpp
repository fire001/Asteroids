#pragma once

#include "Entidades.hpp"
#include "Vector2.hpp"
#include "MathUtilities.hpp"

namespace Asteroides
{
	namespace Entidades
	{
		class Asteroides
		{
		public:
				void Render();
				void Update(float);
			
		private:
			Engine::Math::Vector2*			m_position;
			float							m_height;
			float							m_width;
			float							m_angle;
			float							m_velocity;
			

		};
	}
}
