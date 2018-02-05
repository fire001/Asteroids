#pragma once

namespace Colors
{
	static class Color
	{
	public:
		Color();
		Color(int, int, int);
		~Color();

	private:
		int red;
		int blue;
		int green;
		int alpha;

	};
}
