#include "PlayerShip.h"
#include "SDL2\SDL_opengl.h"
#include "Vector2.hpp"
#include "MathUtilities.hpp"
#include "Entidades.hpp"

	namespace Nave
	{
		namespace Entity
		{
				
				//constructor

			PlayerShip::PlayerShip(int width, int height)
			{
				m_position = Engine::Math::Vector2(Engine::Math::Vector2::origin);
				m_angleInRads = Engine::Math::MathUtilities::ConvertDegreesToRad(m_angle + Herramientas::angle_offset);
				m_angle = (0.0f);
				m_width = (width + 50);
				m_height = (height + 50);
				m_thrust = (false);
				m_radius = (0.0f);
				m_rotate = (120);
				m_mass = (1.0f);
				m_x = (0);
				m_y = (0);
				m_move = (false);
			}
				
				void PlayerShip::Render()
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

					if (m_thrust)
					{
						glBegin(GL_POLYGON);
						glVertex2f(6.0f, -4.0f);
						glVertex2f(0.0f, -16.0f);
						glVertex2f(-6.0f, -4.0f);
						glEnd();
					}

					glEnd();
				}

				void PlayerShip::Update(float deltaTime)
				{
					if (!m_move) m_thrust = false;
					//drag
					//m_velocity = Engine::Math::Vector2(m_velocity.m_x * Herramientas::Drag, m_velocity.m_y * Herramientas::Drag);
					// Calculating new position
					Engine::Math::Vector2 m_position = m_position + m_velocity;

					// Translation to new position
					translate( m_position);

				}

				// MOVE FORWARD
				void PlayerShip::MoveForward()
				{
					m_thrust = true;
					m_move = true;

					Impulse();
					
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

				void PlayerShip::ResetOrientation()
				{
					m_angle = 0.0f;
					m_angleInRads = 0.0f;
				};

				// APPLY IMPULSE
				void PlayerShip::ApplyImpulse(float impulsem_x, float impulsem_y)
				{
					if (m_mass > 0)
					{
						m_velocity += (impulsem_x / m_mass)* cosf(ConvertDegreesToRad(m_rotate));
						m_velocity += (impulsem_x / m_mass)* sinf(ConvertDegreesToRad(m_rotate));
						return Impulse();
				}
				}

				void PlayerShip::Impulse() 
				{
					float impulse = (m_thrust / m_mass);
					float m_x = impulse * std::cosf(m_angleInRads);
					float m_y = impulse * std::sinf(m_angleInRads);
					Engine::Math::Vector2(m_x, m_y) += m_velocity;

					return Impulse();
				
				}

				// collide
				bool PlayerShip::CouldCollide() const
				{
					return m_state == NORMAL_STATE;
				}

				bool PlayerShip::isColliding() const
				{
					return m_state == COLLIDED_STATE;
				}
				bool PlayerShip::DetectCollision(PlayerShip* playership)
				{
					float radiu = (m_radius + playership->m_radius);
					bool collision = (radiu * radiu) >= Engine::Math::MathUtilities::CalculateSquareDistance(m_x, m_y, playership->m_x, playership->m_y);
					if (collision)
					{
						m_state = COLLIDED_STATE;
						playership->m_state = COLLIDED_STATE;
					}
				}
				
			}
		}
