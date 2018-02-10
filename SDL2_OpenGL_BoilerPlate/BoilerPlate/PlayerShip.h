#pragma once
//#define GL_LINE_LOOP 0x00002

#include "Vector2.hpp"
#include "MathUtilities.hpp"
#include <vector>

namespace Engine
{
	namespace Entity
	{
			class PlayerShip
			{
			public:

				/*============================
				*			CTOR
				============================*/
				PlayerShip();
				PlayerShip(const std::vector<Engine::MathUtilities::Vector2> points, const int, const int);
				~PlayerShip();

				/*============================
				*	  PUBLIC FUNCTIONS
				============================*/
				void Move();
				void MoveForward();
				void MoveLeft();
				void MoveRight();
				void Render();
				void Update(float);

				virtual void Translate(Engine::MathUtilities::Vector2 pos) { m_position = pos; };
				void ApplyImpulse();
				//Engine::MathUtilities::Vector2 Impulse();
				void Impulse();
				void Rotate(float);
				void Render(unsigned int, std::vector<Engine::MathUtilities::Vector2>, Engine::MathUtilities::Vector2 position);
				void Render(unsigned int, Engine::MathUtilities::Vector2, float);

				/*============================
				*		  CONST
				============================*/
				const float m_thrust = 1.25f;
				const float m_drag = 0.99f;
				const float m_angle_offset = 99.0f;

			private:
				/*============================
				*		  MEMBERS
				============================*/
				std::vector<Engine::MathUtilities::Vector2> m_points;
				float m_mass;
				float m_radius;
				float m_angle;
				float m_angleRad;
				int m_width;
				int m_height;
				Engine::MathUtilities::Vector2 m_position;
				Engine::MathUtilities::Vector2 m_velocity;


			};
		}
	}


