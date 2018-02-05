#pragma once

namespace Engine
{
	namespace MathUtilities
	{
		class PlayerShip :
		{
		public:
			/*======================================*/
			/*			PUBLIC FUNCTIONS			*/
			/*======================================*/

			void Render();
			void Update(float) override;
			void MoveForward() { applyImpulse(); };
			void MoveRight() { rotate(-5.0f); };
			void MoveLeft() { rotate(5.0f); };

		private:

			/*======================================*/
			/*			PRIVATE FUNCTIONS			*/
			/*======================================*/
			void applyImpulse() override { m_velocity += impulse(); };

			/*======================================*/
			/*			PRIVATE MEMBERS				*/
			/*======================================*/
			Engine::MathUtilities::Vector2D			m_velocity;
		};
	}
}