
#include "Bullet.hpp"
#include "SDL2\SDL_opengl.h"
namespace Herramientas 
{
	namespace Asteroids 
	{

		Bullet::Bullet()
		{	
		}
		Bullet::~Bullet()
		{
		}

		Herramientas::Asteroids::Bullet::Bullet(Engine::Math::Vector2 m_position, Engine::Math::Vector2 m_velocity, float angle, const int width, const int height)
		{
			m_mass = 0.3f;
			m_radius = 1.5f;
			m_angle = angle;
			m_angleInRads = Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle + Herramientas::angle_offset);
			m_position = m_position;
			m_bulletLife = 0;
			m_width = width;
			m_height = height;
		}

		void Herramientas::Asteroids::Bullet::Render()
		{
			// Counting frames
			m_bulletLife++;

			// Resetting the matrix
			glLoadIdentity();

			// Wrap around call
			//warping();

			// Translation
			glTranslatef(m_position.m_x, m_position.m_y, 0.f);

			// Rendering Bullet
			glLoadIdentity();
			glBegin(GL_TRIANGLE_FAN);
			int num_segments = 200;
			for (int i = 0; i < num_segments; i++)
			{
				float angleball = 2.0f * Engine::Math::MathUtilities::PI * float(i) / float(num_segments);
				float m_x = m_radius * cosf(angleball);
				float m_y = m_radius * sinf(angleball);

				Engine::Math::Vector2 vertex
			(
					m_x + m_position.m_x,
					m_y + m_position.m_y);
				glVertex2f(vertex.m_x, vertex.m_y);
			}
			glEnd();
		}

		void Herramientas::Asteroids::Bullet::Update(float)
		{
		}
	}
}