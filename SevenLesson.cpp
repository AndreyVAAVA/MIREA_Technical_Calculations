#include "SevenLesson.h"

void SevenLesson::task2(std::array<int, 10> arr)
{
	int min = arr.front();
	for (auto a : arr)
	{
		if (min > a) min = a;
	}
	std::cout << min;
}

void SevenLesson::task3_1(std::array<int, 3> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}
}

void SevenLesson::task3_2(std::array<int, 3> &arr_1, std::array<int, 3> &arr_2)
{
	task3_1(arr_1);
	task3_1(arr_2);
	arr_1 = arr_2;
}

void SevenLesson::task4(std::vector<int> vect, int N)
{
	vect.resize(N);
	for (int i = 0; i < N; i++)
	{
		std::cin >> vect[i];
	}
	for (int i = 0; i < vect.size(); i++)
	{
		std::cout << vect[i];
	}
}

void SevenLesson::task5(std::vector<int> vect, int N)
{
	int value;
	for (int i = 0; i < N; i++)
	{
		std::cin >> value;
		vect.push_back(value);
	}
	for (int i = 0; i < vect.size(); i++)
	{
		std::cout << vect[i];
	}
}

bool SevenLesson::task6(std::vector<int>& vect_1, std::vector<int>& vect_2)
{
	return vect_1 == vect_2;
}

int SevenLesson::task7(std::vector<int> vect)
{
	return vect.front() - vect.back();
}

std::vector<int> SevenLesson::task8(std::vector<int> vect_1, std::vector<int> vect_2)
{
	std::vector<int> vect_3;
	for (int i = 0; i < vect_1.size(); i++)
	{
		if (vect_1[i] > 600) vect_3[i] = vect_1[i];
		if (vect_2[i] > 600) vect_3[i] = vect_2[i];
	}
	return vect_3;
}

void SevenLesson::task9(std::vector<int>& vect_1, std::vector<int>& vect_2)
{
	for (auto el : vect_2)
		vect_1.push_back(el);
}

std::vector<int> SevenLesson::task10(std::array<int, 10> arr)
{
	std::vector<int> vect;
	for (int i = 0; i < arr.size(); i++)
	{
		if(std::find(vect.begin(), vect.end(), arr[i]) == vect.end()) vect.push_back(arr[i]);
	}
	return vect;
}
