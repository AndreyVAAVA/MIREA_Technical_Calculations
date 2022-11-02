#include "FifthLesson.h"

double* FifthLesson::fourthTask(int* arr, int length)
{
	double* darr = new double[length];
	for (int i = 0; i < length; i++)
	{
		darr[i] = sqrt(arr[i]);
	}
	delete[] arr;
	return darr;
}

double* FifthLesson::fifthTask(double* arr, double originalValue, int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = arr[i] - originalValue;
	}
	return arr;
}

double FifthLesson::sevenTask(double* arr, double originalValue, int length)
{
	arr = fifthTask(arr, originalValue, length);
	double avg = 0;
	for (int i = 0; i < length; i++) avg += arr[i];
	return avg/length;
}

void FifthLesson::eightTask(double* arr, double length)
{
	bool weMetZeroFirstTime = false;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == 0 && weMetZeroFirstTime == false)
		{
			weMetZeroFirstTime = true;
		} 
		else if (arr[i] == 0 && weMetZeroFirstTime == true)
		{
			break;
		}
		else if (arr[i] != 0 && weMetZeroFirstTime == true)
		{
			std::cout << i << " ";
		}
	}
	std::cout << "\n";
}

double* FifthLesson::nineTask(double* arr1, double* arr2, double length)
{
	double* arr3 = new double[length];
	for (int i = 0; i < length; i++) arr3[i] = std::pow(arr1[i], 2) + sqrtf(arr2[i]);
	return arr3;
}

void FifthLesson::tenTask(double first)
{
	std::cout << "1 sensor " << first;
}

void FifthLesson::tenTask(double first, double second)
{
	std::cout << "2 sensors " << (first + second) / 2;
}

void FifthLesson::tenTask(double first, double second, double third)
{
	std::cout << "3 sensors " << (first + second + third) / 3;
}

void FifthLesson::tenTask(double first, double second, double third, double fourth)
{
	std::cout << "4 sensors " << (first + second + third + fourth) / 4;
}

bool FifthLesson::elevenTask(int a, int b)
{
	bool isEqual = (a == b);
	if (isEqual) std::cout << "Равны\n";
	else std::cout << "Не равны\n";
	return isEqual;
}

bool FifthLesson::elevenTask(float a, float b)
{
	bool isEqual = (a == b);
	if (isEqual) std::cout << "Равны\n";
	else std::cout << "Не равны\n";
	return isEqual;
}

double FifthLesson::twelveTask(double deltaF, double teta)
{
	return deltaF*teta;
}

double FifthLesson::thirteenTask(double deltaF, double power, std::string range)
{
	return 0.0;
}

