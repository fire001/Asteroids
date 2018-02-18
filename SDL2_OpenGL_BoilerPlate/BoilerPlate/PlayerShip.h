#pragma once
//#define GL_LINE_LOOP 0x00002

#include "Vector2.hpp"
#include "Entidades.hpp"
#include "MathUtilities.hpp"


namespace Engine
{
	namespace Entity
	{
		class PlayerShip::Entidades
		{
		public:

			/*============================
			*			CTOR
			============================*/
			PlayerShip(int, int);



			/*============================
			*	  PUBLIC FUNCTIONS
			============================*/

			void MoveForward(/*const Engine::Math::Vector2*/);
			void RotateLeft();
			void RotateRight();
			void Render();
			void Update();
			float warping(float, float, float);

		private:

			/*============================
			*		  MEMBERS
			============================*/
			Engine::Math::Vector2*	m_position;
			Engine::Math::Vector2*	m_velocity;
			float m_width;
			float m_height;
			float m_angle;
			float m_mass;
			float m_angle;
			bool m_thruster;
			bool m_moving;
			void applyImpulse() override { m_velocity += impulse(); };

		};
	}
}