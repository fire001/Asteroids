#pragma once
//#define GL_LINE_LOOP 0x00002

#include "Vector2.hpp"



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
				PlayerShip(int, int);
				

				/*============================
				*	  PUBLIC FUNCTIONS
				============================*/
			
				void MoveForward(const Engine::MathUtilities::Vector2);
				void RotateLeft();
				void RotateRight();
				void Render();
				void Update();	

			private:
				/*============================
				*		  MEMBERS
				============================*/
				Engine::MathUtilities::Vector2*	m_position;
				Engine::MathUtilities::Vector2*	m_velocity;
				float m_width;
				float m_height;

			};
		}
	}


