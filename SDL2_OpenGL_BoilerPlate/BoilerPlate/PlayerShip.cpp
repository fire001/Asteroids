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
					m_width = width / 1.0f;
					m_height = height / 1.0f;
				}
				
				void PlayerShip::Render()
				{

					// Reset Matrix
					glLoadIdentity();

					// Translation to current position
					glTranslatef(m_position->m_x , m_position->m_y , 0.0f);

					// Rotation to current angle
					// glRotatef(angle, 0.0f, 0.0f, 1.0f);


					// Rendering
					glBegin(GL_LINE_LOOP);
					glVertex2f(0.0f, 20.f);
					glVertex2f(12.0f, -10.0f);
					glVertex2f(6.0f, -4.0f);
					glVertex2f(-6.0f, -4.0f);
					glVertex2f(-12.0f, -10.0f);

					glEnd();
				}

				void PlayerShip::Update()
				{
				}



				// MOVE FORWARD
				void PlayerShip::MoveForward(const Engine::Math::Vector2 a)
				{
					float x = m_position->m_x + a.m_x;
					float y = m_position->m_y + a.m_y;

					m_position->m_x += x;
					m_position->m_y += y;
				}

				void PlayerShip::RotateLeft()
				{
				}

				void PlayerShip::RotateRight()
				{
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
