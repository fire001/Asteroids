#include "Vector4.h"


namespace Engine
{
	namespace Math
	{

		Vector4::Vector4()
			: m_x(0.0f)
			, m_y(0.0f)
			, m_z(0.0f)
			, m_w(0.0f)
			, m_lenght(0.0f)
		{}

		Vector4::Vector4(float uniform)
			: m_x(uniform)
			, m_y(uniform)
			, m_z(uniform)
			, m_w(uniform)
			, m_lenght(0)
		{
			Length();
		}

		Vector4::Vector4(float x, float y, float z, float w)
			: m_x(x)
			, m_y(y)
			, m_z(z)
			, m_w(w)
			, m_lenght(0)
		{
			Length();
		}

		float Vector4::Length() const
		{
			float squareLenght = std::sqrt(m_x * m_x + m_y * m_y + m_z * m_z + m_w * m_w );
			//m_length = squareLenght;
			return squareLenght;
		}

		float Vector4::SquaredLenght() const
		{
			return m_x * m_x + m_y * m_y + m_z * m_z + m_w * m_w;
		}

		Vector4 Vector4::Normalizer()
		{
			Length();

			float inverseScale = 1.0f / m_lenght;
			m_x *= inverseScale;
			m_y *= inverseScale;
			m_z *= inverseScale;
			m_w *= inverseScale;
			return m_lenght;
		}


		Vector4 & Vector4::operator=(const Vector4 & rhs)
		{
			if (this == &rhs)
			{
				return *this;
			}

			m_x = rhs.m_x;
			m_y = rhs.m_y;
			m_z = rhs.m_z;
			m_w = rhs.m_w;

			return *this;
		}

		Vector3 & Vector3::operator+=(const Vector3 & rhs)
		{
			m_x = m_x + rhs.m_x;
			m_y = m_y + rhs.m_y;
			m_z = m_z + rhs.m_z;

			return *this;
		}

		Vector3 & Vector3::operator-=(const Vector3 & rhs)
		{
			m_x = m_x - rhs.m_x;
			m_y = m_y - rhs.m_y;
			m_z = m_z - rhs.m_z;

			return *this;
		}

		Vector3 & Vector3::operator*=(const Vector3 & rhs)
		{
			m_x = m_x * rhs.m_x;
			m_y = m_y * rhs.m_y;
			m_z = m_z * rhs.m_z;

			return *this;
		}

		Vector3 & Vector3::operator/=(const Vector3 & rhs)
		{
			m_x = m_x / rhs.m_x;
			m_y = m_y / rhs.m_y;
			m_z = m_z / rhs.m_z;

			return *this;
		}

		Vector3 Vector3::operator+(const Vector3 & rhs)
		{
			Vector3 sum;

			sum.m_x = m_x + rhs.m_x;
			sum.m_y = m_y + rhs.m_y;
			sum.m_z = m_z + rhs.m_z;

			return sum;
		}

		Vector3 Vector3::operator-(const Vector3 & rhs)
		{
			Vector3 sub;
			sub.m_x = m_x - rhs.m_x;
			sub.m_y = m_y - rhs.m_y;
			sub.m_z = m_z - rhs.m_z;

			return sub;
		}

		Vector3 Vector3::operator-()
		{
			return Vector3(-m_x, -m_y, -m_z);
		}

		Vector3 Vector3::operator*(const Vector3 & rhs)
		{
			Vector3 scaled;

			scaled.m_x = m_x * rhs.m_x;
			scaled.m_y = m_y * rhs.m_y;
			scaled.m_z = m_z * rhs.m_z;

			return scaled;
		}

		Vector3 Vector3::operator/(const Vector3 & rhs)
		{
			Vector3 inverseScaled;

			inverseScaled.m_x = m_x / rhs.m_x;
			inverseScaled.m_y = m_y / rhs.m_y;
			inverseScaled.m_z = m_z / rhs.m_z;
			return inverseScaled;
		}

		bool Vector3::operator==(const Vector3 & rhs)
		{
			if (this->m_x == rhs.m_x && this->m_y == rhs.m_y && this->m_z == rhs.m_z)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		bool Vector3::operator!=(const Vector3 & rhs)
		{
			if (this->m_x != rhs.m_x || this->m_y != rhs.m_y || this->m_z != rhs.m_z)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}