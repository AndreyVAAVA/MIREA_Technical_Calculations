#include "FourthLesson.h"

void FourthLesson::firstTask()
{
	int s;
	std::cin >> s;
	int* arr = new int[s];
	int sum = 0;
	for (int i = 0; i < s; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}
	std::cout << (double) sum / s;
}

void FourthLesson::secondTask()
{
	int s;
	std::cin >> s;
	int* arr = new int[s];
	int min = 0;
	for (int i = 0; i < s; i++)
	{
		std::cin >> arr[i];
		min = arr[i] < min ? arr[i] : min;
	}
	std::cout << min;
}

void FourthLesson::thirdTask()
{
	int s;
	std::cin >> s;
	int* arr = new int[s];
	int sum = 0;
	for (int i = 0; i < s; i++)
	{
		std::cin >> arr[i];
		sum = arr[i] < 0 ? sum+arr[i] : sum;
	}
	std::cout << sum;
}

void FourthLesson::fourthTask()
{
	int s;
	std::cin >> s;
	int* arr = new int[s];
	int sum = 0;
	int sumBelow = 0;
	bool weMetZero = false;
	for (int i = 0; i < s; i++)
	{
		std::cin >> arr[i];
		if (arr[i] == 0 && !weMetZero)
		{
			weMetZero = true;
		}
		else if (arr[i] < 0 && !weMetZero)
		{
			sumBelow += arr[i];
		}
		sum += arr[i];
	}
	std::cout << sumBelow << "\n";
	std::cout << sum;
}

void FourthLesson::fifthTask()
{
	int s;
	std::cin >> s;
	int* arr = new int[s];
	int sum = 0;
	for (int i = 0; i < s; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = s-1; i >= 0; i--)
	{
		if (arr[i] < 0)
		{
			break;
		}
		sum += arr[i];
	}
	std::cout << sum;
}

void FourthLesson::sixTask()
{
	int s;
	std::cin >> s;
	int* arr = new int[s];
	int sum = 0;
	for (int i = 0; i < s; i++)
	{
		std::cin >> arr[i];
		arr[i] = -1 * arr[i];
	}
}

void FourthLesson::sevenTask()
{
	int s;
	std::cin >> s;
	int* arr = new int[s];
	int mult = 1;
	for (int i = 0; i < s; i++)
	{
		std::cin >> arr[i];
		arr[i] = arr[i] > 0 ? arr[i] + 1 : arr[i];
		if (arr[i] > 0)
		{
			arr[i] += 1;
			mult *= arr[i];
		}
		std::cout << mult;
	}
}

void FourthLesson::eightTask()
{
}
