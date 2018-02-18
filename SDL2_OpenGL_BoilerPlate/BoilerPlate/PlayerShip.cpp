#include "PlayerShip.h"
#include "SDL2\SDL_opengl.h"
#include "Vector2.hpp"
#include "MathUtilities.hpp"

	namespace Engine
	{
		namespace Entity
		{
				
				//constructor

				PlayerShip::PlayerShip( int width,  int height)
				{
					m_position = new Engine::Math::Vector2(Engine::Math::Vector2::origin);
					m_angle = (0.0f);
					m_width = width / 2.0f;
					m_height = height / 2.0f;
					m_thruster = (false);

				}
				
				void PlayerShip::Render()
				{

					// Reset Matrix
					glLoadIdentity();

					// Translation to current position
					glTranslatef(m_position->m_x , m_position->m_y , 0.0f);

					// Rotation to current angle
					 glRotatef(m_angle, 0.0f, 0.0f, 1.0f);


					// Rendering
					glBegin(GL_LINE_LOOP);
					glVertex2f(0.0f, 20.f);
					glVertex2f(12.0f, -10.0f);
					glEnd();

					glVertex2f(6.0f, -4.0f);
					glVertex2f(0.0f, -16.0f);
					glVertex2f(-6.0f, -4.0f);

					glEnd();
				}

				void PlayerShip::Update()
				{

				}

				float PlayerShip::warping(float m_x, float min, float max)
				{
					if (m_x < min) return max - (min - m_x);
					if (m_x > max) return min + (m_x - max);

					if (m_x < min) return -m_x;
					if (m_x > max) return -m_x;
					return m_x;
				}



				// MOVE FORWARD
				void PlayerShip::MoveForward()
				{
					/*float x = m_position->m_x + a.m_x;
					float y = m_position->m_y + a.m_y;*/

					m_thruster = true;
					m_position->m_x += warping(m_x, min, max) 
					m_position->m_y += y;
				}

				void PlayerShip::RotateLeft()
				{
					float new_angle = 5.0f;
					m_angle += new_angle;

					Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle);
				}

				void PlayerShip::RotateRight()
				{
					float new_angle = -5.0f;
					m_angle += new_angle;

					Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle);
				}
			
			

				// APPLY IMPULSE
				/*void PlayerShip::ApplyImpulse()
				{
					//m_velocity += Impulse();
					Impulse();
				}*/

				/*void PlayerShip::Impulse() 
				{
					float impulse = (m_thrust / m_mass);
					float x = impulse * std::cosf(m_angleRad);
					float y = impulse * std::sinf(m_angleRad);
					m_velocity += Engine::MathUtilities::Vector2( x , y);
					
				}*/
				// ROTATE
				/*void PlayerShip::Rotate(float angle)
				{
					// Updating angle
					m_angle += angle;
					m_angleRad = Math::MathUtilities::ConvertDegreesToRad(m_angle + m_angle_offset);
				}
				*/
			}
		}
