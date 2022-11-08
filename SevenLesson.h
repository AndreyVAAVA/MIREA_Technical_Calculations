#pragma once
#include <iostream>
#include <math.h>
#include <array>
#include <vector>
#include "SevenLesson.h"
class SevenLesson
{
public:
	void task2(std::array<int, 10> arr);
	void task3_1(std::array<int, 3> &arr);
	void task3_2(std::array<int, 3> &arr_1, std::array<int, 3> &arr_2);
	void task4(std::vector<int> vect, int N);
	void task5(std::vector<int> vect, int N);
	bool task6(std::vector<int> &vect_1, std::vector<int> &vect_2);
	int task7(std::vector<int> vect);
	std::vector<int> task8(std::vector<int> vect_1, std::vector<int> vect_2);
	void task9(std::vector<int> &vect_1, std::vector<int> &vect_2);
	std::vector<int> task10(std::array<int, 10> arr);
	void task11();
};

