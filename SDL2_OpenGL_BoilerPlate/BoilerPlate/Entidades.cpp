#include "Entidades.hpp"
#include "PlayerShip.h"
#include "Vector2.hpp"
#include <iostream>

namespace Herramientas
{
	namespace Asteroids
	{

			Herramientas::Asteroides::Entidades::Entidades()
			{
			}

			Herramientas::Asteroides::Entidades::Entidades(int width, int height)
			{
				m_position = Engine::Math::Vector2(Engine::Math::Vector2::origin);
				m_mass = 0.5f;

				m_maxwidth = width / 2.0f;
				m_minwidth = -width / 2.0f;
				m_maxheight = height / 2.0f;
				m_minheight = -height / 2.0f;
			}

			
			float Herramientas::Asteroides::Entidades::Render(unsigned int mode, Engine::Math::Vector2 pos, Engine::Math::Vector3 color, float angle)
			{
				//Reset Matrix
				//glLoadIdentity();
				//Warpeo call
				warping();
				//translate to current position
				//translate(m_position.m_x , m_position.m_y, 0.0f);
				//rotation
				//glRotate(angle, 0.0f, 0.0f, 1.0f)
				//color set
				//glColor3f(color.m_x, color.m_y, color.m_z);

				//glEnd();
			}

			void Herramientas::Asteroides::Entidades::Update(float halfTime)
			{
				m_position.m_x += m_velocity.m_x * static_cast<float>(halfTime);
				m_position.m_y += m_velocity.m_y * static_cast<float>(halfTime);

				m_position.m_x = warping(m_position.m_x, m_minwidth, m_maxwidth);
				m_position.m_y = warping(m_position.m_y, m_minheight, m_maxheight);
			}


			float Herramientas::Asteroides::Entidades::rotate(float newAngle)
			{
				m_angle += newAngle;
				m_angleInRads = Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle);
			}

			float Herramientas::Asteroides::Entidades::warping(float m_x, float min, float max)
			{
				if (m_x < min) return max - (min - m_x);
				if (m_x > max) return min + (m_x - max);

				return m_x;
			}
			Engine::Math::Vector2 Herramientas::Asteroides::Entidades::Impulse()
			{
				float impulse = (Herramientas::Thrust / m_mass);
				float x = impulse * std::cosf(m_angleInRads);
				float y = impulse * std::sinf(m_angleInRads);

				return Engine::Math::Vector2(x, y);
			}
		}
	}
