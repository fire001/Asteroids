#include "Color.h"


namespace Colors
{
Color::Color()
{
	red = 0;
	green = 0;
	blue = 0;
	alpha = 255;

}


Color::Color(int rojo, int verde, int azul)
{
	red = rojo;
	green = verde;
	blue = azul;
	alpha = 255;
}

Color::~Color()
{}
}
