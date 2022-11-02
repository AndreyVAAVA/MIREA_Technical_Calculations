#pragma once
#include <iostream>
class Exam
{
public:
	long long task1(long long number);

	long long task2(long long* x_1, long long* x_2, long long size1, long long size2);

	double task3(double x_1, double x_2);
	double task3(double x_1, double x_2, double x_3);

	long long* expansion(long long* arr, long long curr_elem, long long curr_size);
};

