#pragma once
//#define GL_LINE_LOOP 0x00002

#include "Vector2.hpp"
#include "Entidades.hpp"
#include "MathUtilities.hpp"
#include "App.hpp"

namespace Entidades
{
	enum PlayerState {NORMAL_STATE, COLLIDED_STATE, DELETE_STATE};
	enum AsteroidsSize {NORMAL_SIZE = 0, MEDIUM_SIZE = 1, SMALL_SIZE = 2};
	namespace Entity
	{

		class PlayerShip
		{
		public:

			/*============================
			*			CTOR
			============================*/
			Entidades::Entity::PlayerShip::PlayerShip(int, int);



			/*============================
			*	  PUBLIC FUNCTIONS
			============================*/

			void MoveForward(); //{ applyImpulse(); };
			void RotateLeft();
			void RotateRight();
			void Render();
			void Update(float);
			void ResetOrientation();
			bool CouldCollide() const;
			bool DetectCollision(PlayerShip* playership);
			bool isColliding() const;
			virtual void ApplyImpulse(float m_x, float m_y);
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
			float m_rotate;
			float m_radius;
			float ConvertRadToDegrees(float);
			float ConvertDegreesToRad(float);
			float m_state;
			float m_x;
			float m_y;
			
			

		};

			
		}
	}
