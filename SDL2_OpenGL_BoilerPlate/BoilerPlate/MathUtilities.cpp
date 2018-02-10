#include "MathUtilities.hpp"
#include <iostream>


namespace Math {
	namespace MathUtilities {

		float Converter(int IntToFloat)
		{
			return (float)roundf(IntToFloat);
		}


		float Round(int x)
		{
			return (x / 2) * 2;
		}

		float PoweOfTwo(int num)
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


		float ConvertRadToDegrees(float angleInRadians)
		{
			return angleInRadians * (PI / 180);
		}

		float ConvertDegreesToRad(float angleInDegrees)
		{
			return angleInDegrees * (180 / PI);
		}

		float Distance(double)
		{
			return 0.0;
		}
	}
}

