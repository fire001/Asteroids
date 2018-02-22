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
	}
}