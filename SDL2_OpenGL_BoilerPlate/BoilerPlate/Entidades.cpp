#include "Entidades.hpp"
#include "Vector2.hpp"
#include <iostream>
#include "Vector3.h"
#include "MathUtilities.hpp"



namespace Asteroids
{
	class Entidades
	{
		Entidades::Entidades() {}

		Entidades::Entidades(int width, int height)
		{
			m_position = new Engine::Math::Vector2(Engine::Math::Vector2::origin)
			 m_mass = 0.5f;
			 m_maxwidth = width / 2.0f;
			 m_minwidth = -width / 2.0f;
			 m_maxheight = height / 2.0f;
			 m_minheight = -height / 2.0f;
		};


		float Entidades::Render()
		{
			//Reset Matrix
			//glLoadIdentity();
			//Warpeo call
			//warping();
			//translate to current position
			//translate(m_position.m_x , m_position.m_y, 0.0f);
			//rotation
			//glRotate(angle, 0.0f, 0.0f, 1.0f)
			//color set
			//glColor3f(color.m_x, color.m_y, color.m_z);

			//glEnd();
		}


		/*void Asteroids::Entidades::Update(float halfTime)
		{
			m_position.m_x += m_velocity.m_x * static_cast<float>(halfTime);
			m_position.m_y += m_velocity.m_y * static_cast<float>(halfTime);

			m_position.m_x = warping(m_position.m_x, m_minwidth, m_maxwidth);
			m_position.m_y = warping(m_position.m_y, m_minheight, m_maxheight);
		}*/


		float Entidades::rotate(float newAngle)
		{
			m_angle += newAngle;
			m_angleInRads = Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle);
		}

		
		float  Entidades::warping(float m_x, float min, float max)
		{
			if (m_x < min) return max - (min - m_x);
			if (m_x > max) return min + (m_x - max);

			return m_x;
		}
		Engine::Math::Vector2 Entidades::Impulse()
		{
			float impulse = (Herramientas::Thrust / m_mass);
			float x = impulse * std::cosf(m_angleInRads);
			float y = impulse * std::sinf(m_angleInRads);

			return Engine::Math::Vector2(x, y);
		}
	};
}