#include "MathUtilities.hpp"
#include <iostream>

namespace Engine {

	namespace Math 
	{
		class MathUtilities 
		{

			float MathUtilities::Converter(int IntToFloat)
			{
				return (float)roundf(IntToFloat);
			}


			float MathUtilities::Round(int x)
			{
				return (x / 2) * 2;
			}

			float MathUtilities::PoweOfTwo(int num)
			{
				while (((num % 2) == 0) && num > 1)
					num /= 2;
				return (num == 1);
			}


			template<class T>
			T Clamp(T)
			{

				int max = 255, min = 0;
				int clamp;
				clamp = x < min ? min : x;
				return clamp > max ? max : clamp;
			}


			float MathUtilities::ConvertRadToDegrees(float angleInRadians)
			{
				return angleInRadians * (PI / 180);
			}

			float MathUtilities::ConvertDegreesToRad(float angleInDegrees)
			{
				return angleInDegrees * (180 / PI);
			}

			float MathUtilities::CalculateSquareDistance(float m_x1, float m_y1, float m_x2, float m_y2)
			{
				float m_xdiff = m_x2 - m_x1;
				float m_ydiff = m_y2 - m_x2;
				return (m_xdiff * m_xdiff) + (m_ydiff * m_ydiff);
			}

		};
	}
}
