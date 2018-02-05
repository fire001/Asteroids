#include "PlayerShip.h"
#include <iostream>
#include "SDL2\SDL_opengl.h"

namespace Engine 
{
	namespace MathUtilities
	{

		void Engine::PlayerShip::Render()
		{

		}

		void Engine::PlayerShip::Update(float)
		{
			// Calculating new position
			Engine::MathUtilities::Vector2D pos = m_position + m_velocity;
		}
	}
}