#pragma once
//#define GL_LINE_LOOP 0x00002

#include "Vector2.hpp"
#include "Entidades.hpp"
#include "MathUtilities.hpp"
#include "App.hpp"

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
			Engine::Entity::PlayerShip::PlayerShip(int, int);



			/*============================
			*	  PUBLIC FUNCTIONS
			============================*/

			void MoveForward(); //{ applyImpulse(); };
			void RotateLeft();
			void RotateRight();
			void Render();
			void Update(float);
			void ResetOrientation();
			void Impulse();
			float warping(float m_x, float min, float max);

				
		private:

			/*============================
			*		  MEMBERS
			============================*/
			Engine::Math::Vector2	m_position;
			float	m_velocity;

			float m_width;
			float m_height;
			float m_angle;
			float m_mass;
			float m_angleInRads;
			float m_thrust;
			
			float m_radius;
			
			

		};

			
		}
	}
