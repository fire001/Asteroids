#include "Asteroides.hpp"
#include "Vector2.hpp"
#include "Vector3.h"
#include "App.hpp"
#include "Entidades.hpp"
#include "SDL2\SDL_opengl.h"

namespace Asteroides
{
	namespace Entidades
	{
		Asteroides::Asteroides(const int width, const int height)
		{
			randomAngle(2, 24);
			m_angleInRads = Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle + Herramientas::angle_offset);
			m_width = width + 50;
			m_height = height + 50;
			sizeFactor();
			m_velocity = Engine::Math::Vector2();
		}
		Asteroides::Asteroides(AsteroidsSize, Engine::Math::Vector2, const int width, const int height)
		{
			m_size = m_size;
			Engine::Math::Vector2 m_position = m_position;
			randomAngle(2, 24);
			m_angleInRads = Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle + Herramientas::angle_offset);
			m_width = width;
			m_height = height;
			sizeFactor();
			m_velocity = Engine::Math::Vector2();
		}
		void Asteroides::Render()
		{
			// Reset Matrix
			glLoadIdentity();

			// Translation to current position
			//Engine::Math::Vector2*(m_position.m_x, m_position.m_y, 0.3f);

			// Rotation to current angle
			glRotatef(m_angle, 0.0f, 0.0f, 1.0f);


			// Rendering
			glBegin(GL_LINE_LOOP);
			glVertex2f(20.0f, 20.f);
			glVertex2f(12.0f, -10.0f);
			glEnd();

			glVertex2f(19.0f, -50.0f);
			glVertex2f(20.0f, -16.0f);
			glVertex2f(-10.0f, -30.0f);

			glEnd();
		}

		void Asteroides::Update(float)
		{
			// De alguna manera se tienen que mover
			Engine::Math::Vector2 m_position = m_position + m_velocity;

			// Translation to new position
			//translate(pos);
		}
		void Asteroides::randomAngle(float m_min, float m_max)
		{
			m_angle = Engine::Math::MathUtilities::RandomInRange<float>(m_min, m_max);
		}
		void Asteroides::sizeFactor()
		{
			if (m_size == AsteroidsSize::BIG_SIZE) { m_radius = 40.f; m_mass = 3.f; };

			if (m_size == AsteroidsSize::MEDIUM_SIZE) { m_radius = 20.f; m_mass = 2.5f; };

			if (m_size == AsteroidsSize::SMALL_SIZE) { m_radius = 10.f; m_mass = 2.f; };
		}
	}
}