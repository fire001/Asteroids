#include "Color.h"


namespace Colors
{
Color::Color()
{
	m_color = Engine::Math::Vector3();
}


Color::Color(int rojo, int verde, int azul)
{
	m_color.m_x = rojo;
	m_color.m_y = verde;
	m_color.m_z = azul;
}

Color::~Color()
{}
}
