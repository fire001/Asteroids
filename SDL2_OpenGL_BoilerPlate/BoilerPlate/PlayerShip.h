#pragma once
//#define GL_LINE_LOOP 0x00002

#include "Vector2.hpp"
#include "Entidades.hpp"
#include "MathUtilities.hpp"
#include "Bullet.hpp"
#include "SDL2\SDL_opengl.h"
#include <vector>
#include <iostream>

namespace Nave
{
	enum PlayerState {NORMAL_STATE, COLLIDED_STATE, DELETE_STATE};
	
	namespace Entity
	{

<<<<<<< HEAD
		class PlayerShip 
=======
		class PlayerShip : Asteroids::Entidades
>>>>>>> 5a141239d0294d71cab123d02c6b4828ee988a66
		{
		public:

			/*============================
			*			CTOR
			============================*/
			Nave::Entity::PlayerShip::PlayerShip(int, int);



			/*============================
			*	  PUBLIC FUNCTIONS
			============================*/

			void MoveForward(); //{ applyImpulse(); };
			void translate(Engine::Math::Vector2 m_position);
			void Move();
			void RotateLeft();
			void RotateRight();
			void Render();
			void Update();
			void Drag();
			void shooting();
			void ResetOrientation();
			bool CouldCollide(); //const { return m_inmune; };
			bool DetectCollision(PlayerShip* playership);
			bool isColliding() const;
			virtual void ApplyImpulse(float m_x, float m_y);
			//impulso es == fuerza * deltatiempo
			void Impulse();
			void EraseBullet();
<<<<<<< HEAD
			

=======
>>>>>>> 5a141239d0294d71cab123d02c6b4828ee988a66
			void setCollision(bool status) { m_inmune = status; };
			void setVelocity(Engine::Math::Vector2 m_velocity) { m_velocity = m_velocity; };
			

			
		private:

			void DeleteBullet();


			/*============================
			*		  MEMBERS
			============================*/
			Engine::Math::Vector2	m_position;
			Engine::Math::Vector2	m_velocity;
			
			bool					m_inmune;
			int						m_respawnTime;
			int						m_usedBullets;
			float					m_bullets;
			float					m_width;
			float					m_height;
			float					m_angle;
			float					m_mass;
			float					m_angleInRads;
			float					m_rotate;
			float					m_radius;
			float					m_color;
			bool					m_thrust;
			//virtual void ApplyImpulse() override { m_velocity += Impulse(); };
			//por si las moscas
			float ConvertRadToDegrees(float);
			float ConvertDegreesToRad(float);
			float m_state;
			float m_x;
			float m_y;
			float m_move;
		};		
		}
	}
