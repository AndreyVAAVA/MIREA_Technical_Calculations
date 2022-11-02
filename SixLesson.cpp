#include "SixLesson.h"

void SixLesson::task7(std::array<float, n> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}
	for (auto a: arr)
	{
		std::cout << a << " ";
	}
}
