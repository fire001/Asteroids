#include "Entidades.hpp"
#include "PlayerShip.h"

namespace Engine
{

	Entidades::Entidades()
	{

	}

	Entidades::Entidades(int width, int height)
	{
		m_position = new Engine::Math::Vector2(Engine::Math::Vector2::origin);
		m_mass = 0.5f;
	}

	Entidades::~Entidades()
	{

	}

	float Entidades::warping(float m_x, float min, float max)
	{
		if (m_x < min) return max - (min - m_x);
		if (m_x > max) return min + (m_x - max);
		return m_x;
	}
}