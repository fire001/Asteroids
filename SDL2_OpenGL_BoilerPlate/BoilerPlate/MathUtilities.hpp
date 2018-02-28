#pragma once
#ifndef _MATH_HPP_
#define _MATH_HPP_
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>

namespace Engine
{
	namespace Math {
		namespace MathUtilities
		{
		
			const float PI = 3.1415926535897323846f;

			float Converter(int);
			float Round(int);
			float PoweOfTwo(int);
			template<class T> T Clamp(T);
			float ConvertRadToDegrees(float);
			float ConvertDegreesToRad(float);
			float CalculateSquareDistance(float m_x1, float m_y1, float m_x2, float m_y2);

			template<typename T>
			T RandomInRange(T min, T max) { return static_cast<T>(min + (rand() % (int)(max - min + 1))); }

			template<typename T>
			T RandomInRange2(T min, T max) { return min + (max - min) * (rand() / static_cast<T>(RAND_MAX)); }

			float m_angleInRads;
<<<<<<< HEAD

=======
			float m_x;
			float m_y;
>>>>>>> 39ff998221662540ca132c4204f1d6ed9071a21b
		};
	}
}
#endif // !_MATH_HPP_