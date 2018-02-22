#include "PlayerShip.h"
#include "SDL2\SDL_opengl.h"
#include "Vector2.hpp"
#include "MathUtilities.hpp"
#include "Entidades.hpp"

	namespace Engine
	{
		namespace Entity
		{
				
				//constructor

				Engine::Entity::PlayerShip::PlayerShip( int width,  int height)
					
				{
					m_position = Engine::Math::Vector2(Engine::Math::Vector2::origin);
					m_angleInRads = Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle + Herramientas::angle_offset);
					m_angle = (0.0f);
					m_width = width + 50;
					m_height = height +50;
					m_thrust = (false);
					m_radius = 0.f;
					
				   

				}
				
				void Engine::Entity::PlayerShip::Render()
				{

					// Reset Matrix
					glLoadIdentity();

					// Translation to current position
					glTranslatef(m_position.m_x , m_position.m_y , 0.0f);

					// Rotation to current angle
					 glRotatef(m_angle, 0.0f, 0.0f, 0.0f);


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

				void Engine::Entity::PlayerShip::Update(float)
				{
					// Calculating new position
					Engine::Math::Vector2 m_position = m_position + m_velocity;

					// Translation to new position
					//translate(m_position);

				}

				float Engine::Entity::PlayerShip::warping(float m_x, float min, float max)
				{
					if (m_x < min) return max - (min - m_x);
					if (m_x > max) return min + (m_x - max);

					if (m_x < min) return -m_x;
					if (m_x > max) return -m_x;
					return m_x;
				}



				// MOVE FORWARD
				void Engine::Entity::PlayerShip::MoveForward()
				{
					/*float x = m_position->m_x + a.m_x;
					float y = m_position->m_y + a.m_y;*/

					m_thrust = true;
					//m_position.m_x += warping();
				}

				void Engine::Entity::PlayerShip::RotateLeft()
				{
					float new_angle = 5.0f;
					m_angle += new_angle;

					Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle);
				}

				void Engine::Entity::PlayerShip::RotateRight()
				{
					float new_angle = -5.0f;
					m_angle += new_angle;


					Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle);

				}

				void Engine::Entity::PlayerShip::ResetOrientation()
				{
					m_angle = 0.0f;
					m_angleInRads = 0.0f;
				};

				// APPLY IMPULSE
				/*void PlayerShip::ApplyImpulse()
				{
					m_velocity += Engine::Math::Vector2 Impulse();
					//return Impulse();
				}*/

				void PlayerShip::Impulse() 
				{
					float impulse = (m_thrust / m_mass);
					float x = impulse * std::cosf(m_angleInRads);
					float y = impulse * std::sinf(m_angleInRads);
					Engine::Math::Vector2(x, y) += m_velocity;

					return Impulse();
				
				}
				// ROTATE
				/*void PlayerShip::Rotate(float angle)
				{
					// Updating angle
					m_angle += angle;
					m_angleInRads = Math::MathUtilities::ConvertDegreesToRad(m_angle + m_angle_offset);
				}
				*/
			}
		}
