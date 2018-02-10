#include "PlayerShip.h"
#include "SDL2\SDL_opengl.h"
#include "Vector2.hpp"
#include "MathUtilities.hpp"

	namespace Engine
	{
		namespace Entity
		{
				PlayerShip::PlayerShip()
				{}
				//constructor

				PlayerShip::PlayerShip(const std::vector<Engine::MathUtilities::Vector2> points, const int width, const int height)
					: m_velocity(Engine::MathUtilities::Vector2())
				{
					m_points = points;
					m_radius = 0.0f;
					m_angle = 0.0f;
					m_angleRad = Math::MathUtilities::ConvertDegreesToRad(m_angle + m_angle_offset);
					m_width = width + 50;
					m_height = height + 50;
				}



				// DESTRUCTOR
				PlayerShip::~PlayerShip()
				{}

				void PlayerShip::Render(unsigned int mode, Engine::MathUtilities::Vector2 position, float angle)
				{
					m_angleRad = 0.0f;

					// Reset Matrix
					glLoadIdentity();

					// Translation to current position
					glTranslatef(position.m_x, position.m_y, 0.0f);

					// Rotation to current angle
					glRotatef(angle, 0.0f, 0.0f, 1.0f);

					// Rendering
					glBegin(GL_LINE_LOOP);
					for (auto temp : m_points)
						glVertex2f(temp.m_x, temp.m_y);

					glEnd();
				}

				// MOVE
				void PlayerShip::Move()
				{
					// Move forward
					MoveForward();

					// Move left
					MoveLeft();

					// Move right
					MoveRight();
				}

				// MOVE FORWARD
				void PlayerShip::MoveForward()
				{
					ApplyImpulse();
				}

				// MOVE LEFT
				void PlayerShip::MoveLeft()
				{
					Rotate(-5.0f);
				}

				// MOVE RIGHT
				void PlayerShip::MoveRight()
				{
					Rotate(5.0f);
				}

				// RENDER
				void PlayerShip::Render()
				{
					m_angleRad = Math::MathUtilities::ConvertDegreesToRad(m_angle + m_angle_offset);

					Render(GL_LINE_LOOP, m_position, m_angle);
				}

				// RENDER
				void PlayerShip::Render(unsigned int mode, std::vector<Engine::MathUtilities::Vector2> points, Engine::MathUtilities::Vector2 position)
				{
					// Reset matrix
					glLoadIdentity();

					// Translation to current position
					glTranslatef(position.m_x, position.m_y, 0.f);

					// Keep angle offset
					glRotatef(0.f, 0.f, 0.f, 1.f);

					glBegin(GL_LINE_LOOP);
					for (auto temp : points)
						glVertex2f(temp.m_x, temp.m_y);

					glEnd();
				}

				// UPDATE
				void PlayerShip::Update(float deltaTime)
				{
					// Calculating new position
					Engine::MathUtilities::Vector2 pos = m_position + m_velocity;

					// Translation to new position
					Translate(pos);
				}

				// APPLY IMPULSE
				void PlayerShip::ApplyImpulse()
				{
					//m_velocity += Impulse();
					Impulse();
				}

				// IMPULSE
				/*Engine::MathUtilities::Vector2 PlayerShip::Impulse()
				{
					float impulse = (m_thrust / m_mass);
					float x = impulse * std::cosf(m_angleRad);
					float y = impulse * std::sinf(m_angleRad);

					return Engine::MathUtilities::Vector2(x, y);
				}*/

				void PlayerShip::Impulse() 
				{
					float impulse = (m_thrust / m_mass);
					float x = impulse * std::cosf(m_angleRad);
					float y = impulse * std::sinf(m_angleRad);

					m_velocity = Engine::MathUtilities::Vector2(x, y);
				}
				// ROTATE
				void PlayerShip::Rotate(float angle)
				{
					// Updating angle
					m_angle += angle;
					m_angleRad = Math::MathUtilities::ConvertDegreesToRad(m_angle + m_angle_offset);
				}

			}
		}
