#pragma once
#include <math.h>
#include <iostream>
#include <memory.h>
class FifthLesson
{
public:
	double* fourthTask(int* arr, int length);
	double* fifthTask(double* arr, double originalValue, int length);
	double sevenTask(double* arr, double originalValue, int length);
	void eightTask(double* arr, double length);
	double* nineTask(double* arr1, double* arr2, double length);
	void tenTask(double first);
	void tenTask(double first, double second);
	void tenTask(double first, double second, double third);
	void tenTask(double first, double second, double third, double fourth);
	bool elevenTask(int a, int b);
	bool elevenTask(float a, float b);
	double twelveTask(double deltaF, double teta = (1000 * pow(10, 6)));
	double thirteenTask(double deltaF = 200*pow(10, 6), double power = 50.5, std::string range = "ukv");
};

