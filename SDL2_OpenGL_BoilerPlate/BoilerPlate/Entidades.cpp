
#include "Entidades.hpp"
<<<<<<< HEAD
#include "SDL2\SDL_opengl.h"
namespace Asteroids
=======
#include "PlayerShip.h"
#include "MathUtilities.hpp"


namespace Herramientas
>>>>>>> 39ff998221662540ca132c4204f1d6ed9071a21b
{
	namespace Asteroids
	{
		class Entidades
		{
<<<<<<< HEAD
			m_position = Engine::Math::Vector2(Engine::Math::Vector2::origin);

			m_mass = 0.5f;
=======
			Entidades::Entidades() {}
>>>>>>> 39ff998221662540ca132c4204f1d6ed9071a21b

			Entidades::Entidades(int width, int height)
			{
				Engine::Math::Vector2 m_position = Engine::Math::Vector2(Engine::Math::Vector2::origin);
				float m_mass = 0.5f;
				float m_maxwidth = width / 2.0f;
				float m_minwidth = -width / 2.0f;
				float m_maxheight = height / 2.0f;
				float m_minheight = -height / 2.0f;
				//float m_angleInRad = Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle + Herramientas::angle_offset);
		}

			void Entidades::Render(Engine::Math::Vector2 position, float angle)
			{
				//Reset Matrix
				glLoadIdentity();

<<<<<<< HEAD
		float Entidades::Render()
		{
			//Reset Matrix
			glLoadIdentity();
			//Warpeo call
			warping(50,50,50);
			//translate to current position
			//gltranslatef(m_position.m_x , m_position.m_y, 0.0f);
			//rotation
			glRotatef(m_angle, 0.0f, 0.0f, 1.0f);
			//color set
			//glColor3f(color.m_x, color.m_y, color.m_z);

			glEnd();
		}
=======
				//Warpeo call
				//Entidades::warping();
				//translate to current position
				glTranslatef(position.m_x, position.m_y, 0.0f);
				//rotation
				glRotatef(angle, 0.0f, 0.0f, 1.0f);
				//color set
				//glColor3f(color.m_x, color.m_y, color.m_z);
>>>>>>> 39ff998221662540ca132c4204f1d6ed9071a21b

				glEnd();
			}

			/*void Asteroids::Entidades::Update(float halfTime)
			{
				 m_position.m_x +=  m_velocity.m_x * static_cast<float>(halfTime);
				 m_position.m_y +=  m_velocity.m_y * static_cast<float>(halfTime);

				 m_position.m_x = warping( m_position.m_x, m_minwidth, m_maxwidth);
				 m_position.m_y = warping( m_position.m_y, m_minheight, m_maxheight);
			}
			*/


			float Entidades::warping(float m_x, float min, float max)
			{
				if (m_x < min)
				{
					return max - (min - m_x);
				}
				if (m_x > max)
				{
					return min + (m_x - max);
				}

				return m_x;
			}

			void Asteroids::Entidades::DrawCircle(float m_radius)
			{

			}

			void Asteroids::Entidades::clampSpeed(float)
			{
			}

			/*void Asteroids::Entidades::RandomPosition(float m_yMax, float m_xMax)
			{

				float m_x = Engine::Math::MathUtilities::RandomInRange<float>(-m_xMax, m_xMax);
				float m_y = Engine::Math::MathUtilities::RandomInRange<float>(-m_yMax, m_yMax);

				 m_position.m_x = m_x;
				 m_position.m_y = m_y;
			}*/

			/*void Asteroids::Entidades::ApplyImpulse(float m_x, float m_y)
			{
				if (m_mass > 0)
				{
					m_velocity += (impulsem_x / m_mass)* cosf(ConvertDegreesToRad(m_rotate));
					m_velocity += (impulsem_x / m_mass)* sinf(ConvertDegreesToRad(m_rotate));
			}*/

			/*Engine::Math::Vector2 Entidades::Impulse()
			{
				float impulse = (Herramientas::Thrust / m_mass);
				float m_x = impulse * std::cosf(m_angleInRads);
				float m_y = impulse * std::sinf(m_angleInRads);

				return Engine::Math::Vector2(m_x, m_y);
			}*/

		
		};
	}
}