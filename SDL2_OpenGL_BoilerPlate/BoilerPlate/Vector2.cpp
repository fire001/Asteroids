#include "Vector2.hpp"
#include <iostream>
#include <cmath>

namespace Engine
{
	namespace MathUtilities
	{

		Vector2::Vector2()
			: m_x(0.0f)
			, m_y(0.0f)
			, m_lenght(0.0f)
		{}

		Vector2::Vector2(float uniform)
			: m_x(uniform)
			, m_y(uniform)
			, m_lenght(0)
		{
			Length();
		}

		Vector2::Vector2(float x, float y)
			: m_x(x)
			, m_y(y)
			, m_lenght(0)
		{
			Length();
		}

		float Vector2::Length() const
		{
			float squareLenght = std::sqrt(m_x * m_x + m_y * m_y);
			//m_length = squareLenght;
			return squareLenght;
		}

		float Vector2::SquaredLenght() const
		{
			return m_x * m_x + m_y * m_y;
		}

		Vector2 Vector2::Normalizer()
		{
			Length();

			float inverseScale = 1.0f / m_lenght;
			m_x *= inverseScale;
			m_y *= inverseScale;
			return m_lenght;
		}


		Vector2 & Vector2::operator=(const Vector2 & rhs)
		{
			if (this == &rhs)
			{
				return *this;
			}

			m_x = rhs.m_x;
			m_y = rhs.m_y;

			return *this;
		}

		Vector2 & Vector2::operator+=(const Vector2 & rhs)
		{
			m_x = m_x + rhs.m_x;
			m_y = m_y + rhs.m_y;

			return *this;
		}

		Vector2 & Vector2::operator-=(const Vector2 & rhs)
		{
			m_x = m_x - rhs.m_x;
			m_y = m_y - rhs.m_y;

			return *this;
		}

		Vector2 & Vector2::operator*=(const Vector2 & rhs)
		{
			m_x = m_x * rhs.m_x;
			m_y = m_y * rhs.m_y;

			return *this;
		}

		Vector2 & Vector2::operator/=(const Vector2 & rhs)
		{
			m_x = m_x / rhs.m_x;
			m_y = m_y / rhs.m_y;

			return *this;
		}

		Vector2 Vector2::operator+(const Vector2 & rhs)
		{
			Vector2 sum;

			sum.m_x = m_x + rhs.m_x;
			sum.m_y = m_y + rhs.m_y;

			return sum;
		}

		Vector2 Vector2::operator-(const Vector2 & rhs)
		{
			Vector2 sub;
			sub.m_x = m_x - rhs.m_x;
			sub.m_y = m_y - rhs.m_y;

			return sub;
		}

		Vector2 Vector2::operator-()
		{
			return Vector2(-m_x, -m_y);
		}

		Vector2 Vector2::operator*(const Vector2 & rhs)
		{
			Vector2 scaled;

			scaled.m_x = m_x * rhs.m_x;
			scaled.m_y = m_y * rhs.m_y;

			return scaled;
		}

		Vector2 Vector2::operator/(const Vector2 & rhs)
		{
			Vector2 inverseScaled;

			inverseScaled.m_x = m_x / rhs.m_x;
			inverseScaled.m_y = m_y / rhs.m_y;

			return inverseScaled;
		}

		bool Vector2::operator==(const Vector2 & rhs)
		{
			if (this->m_x == rhs.m_x && this->m_y == rhs.m_y)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		bool Vector2::operator!=(const Vector2 & rhs)
		{
			if (this->m_x != rhs.m_x || this->m_y != rhs.m_y)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		Vector2 operator*(float scaledUnit, const Vector2 &rhs)
		{
			Vector2 scaled;

			scaled.m_x = scaledUnit * rhs.m_x;
			scaled.m_y = scaledUnit * rhs.m_y;

			return scaled;
		}

		Vector2 operator*(const Vector2 &lhs, float scaleUnit)
		{
			Vector2 scaled;

			scaled.m_x = scaleUnit * lhs.m_x;
			scaled.m_y = scaleUnit * lhs.m_y;

			return scaled;
		}
	}
}