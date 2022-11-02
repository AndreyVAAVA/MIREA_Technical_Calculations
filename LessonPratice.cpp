#include <iostream>
#include <vector>
#include "FirstLesson.h"
#include "ThirdLesson.h"
#include "Exam.h"
#include "FourthClass.h"
#include "SamRab1.h"
#include "FifthLesson.h"
#include "EightLesson.h"

long long task1(long long number);

long long task2(long long* x_1, long long* x_2, long long size1, long long size2);

double task3(double x_1, double x_2);
double task3(double x_1, double x_2, double x_3);

long long* expansion(long long* arr, long long curr_elem, long long curr_size);

void variant3(int* a, int* b, int* c);

void examTask(std::vector<int> vect);

int main()
{
    /*auto les = ThirdLesson();
    int n;
    std::cin >> n;
    double* arr = new double[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    double* r_arr = les.fifthTask(arr, 6, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << r_arr[i] << " ";
    }*/
    /*task1(225);
	
    long long* x_1 = new long long[6];
    x_1[0] = 6;
    x_1[1] = 5;
    x_1[2] = 3;
    x_1[3] = 4;
    x_1[4] = 8;
    x_1[5] = 2;
    long long* x_2 = new long long[8];
    x_2[0] = 5;
    x_2[1] = 1;
    x_2[2] = 7;
    x_2[3] = 3;
    x_2[4] = 9;
    x_2[5] = 0;
    x_2[6] = 11;
    x_2[7] = 4;
    std::cout << "\n";
    std::cout << task2(x_1, x_2, 6, 8);
    std::cout << "\n";
	int amount;
	std::cout << "How much numbers do you want to input?\n";
	std::cin >> amount;
	double number_1;
	double number_2;
	double number_3;
	if (amount == 3)
	{
		std::cout << "Enter first number:\n";
		std::cin >> number_1;
		std::cout << "Enter second number:\n";
		std::cin >> number_2;
		std::cout << "Enter third number:\n";
		std::cin >> number_3;
		std::cout << "Results: " << task3(number_1, number_2, number_3) << "\n";
	}
	else if (amount == 2)
	{
		std::cout << "Enter first number:\n";
		std::cin >> number_1;
		std::cout << "Enter second number:\n";
		std::cin >> number_2;
		std::cout << "Results: " << task3(number_1, number_2) << "\n";
	}*/
	/*auto les = FifthLesson();
	std::array<int, 3> arr_1; std::array<int, 3> arr_2;
	les.task3_2(arr_1, arr_2);
	std::vector<int> vect;
	int N;
	std::cin >> N;*/
	/*auto sam = SamRab1();
	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;
	variant3(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);*/
	/*int size;
	std::cin >> size;
	std::vector<int> vect(size);
	for (int i = 0; i < size; i++)
	{
		std::cin >> vect[i];
	}
	examTask(vect);*/
	auto les = EightLesson();
	int N = 5;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}
	les.task2(arr, N);

}

long long task1(long long number)
{
	long long curr_size = 100;
	long long* arr = new long long[curr_size];
	long long curr_elem = 0;
	for (long long i = 1; i <= number /*lround(sqrt(number)) + 1*/; i++)
	{
		if (curr_elem >= curr_size)
		{
			long long* perm_arr = new long long[lround(curr_size * 1.5)]; // округление практически как в ArrayList в Java
			curr_size = lround(curr_size * 1.5);
			for (long long j = 0; j < curr_elem; j++)
			{
				perm_arr[j] = arr[j];
			}
			arr = perm_arr;
		}
		if (number % i == 0) {
			// выйти из цикла, когда будет элемент, уже бывший в массиве
			arr[curr_elem++] = i;
			//arr[curr_elem++] = number / i;
		}
	}
	for (long long i = 0; i < curr_elem; i++)
	{
		std::cout << arr[i] << " ";
	}
	return curr_elem;
}

long long task2(long long* x_1, long long* x_2, long long size1, long long size2)
{
	// O(n^2)
	long long curr_size = 100;
	long long* arr_unique = new long long[size1];
	long long curr_elem = 0;
	bool wasIn = false;
	for (long long i = 0; i < size1; i++)
	{
		for (long long j = 0; j < size2; j++)
		{
			if (x_2[j] == x_1[i])
			{
				wasIn = true;
			}
		}
		if (!wasIn)
		{
			arr_unique[curr_elem++] = x_1[i];
		}
		wasIn = false;
	}
	long long min = arr_unique[0];
	for (long long i = 0; i < curr_elem; i++)
	{
		if (min > arr_unique[i])
		{
			min = arr_unique[i];
		}
	}
	return min;
}

double task3(double x_1, double x_2)
{
	return sqrtf(x_1) + sqrtf(x_2);
}

double task3(double x_1, double x_2, double x_3)
{
	return sqrtf(x_1) + sqrtf(x_2) + sqrtf(x_3);
}

long long* expansion(long long* arr, long long curr_elem, long long curr_size)
{
	if (curr_elem >= curr_size)
	{
		long long* perm_arr = new long long[lround(curr_size * 1.5)]; // округление практически как в ArrayList в Java
		curr_size = lround(curr_size * 1.5);
		for (long long i = 0; i < curr_elem; i++)
		{
			perm_arr[i] = arr[i];
		}
		arr = perm_arr;
	}
	return arr;
}
void variant3(int* a, int* b, int* c)
{
	*a = sqrt(*a);
	*b = *b * 15;
	*c = (*c * (*a)) / (*b);
}

void examTask(std::vector<int> vect)
{
	for (int i = 0; i < vect.size(); i++)
	{
		std::cout << -1 * vect.at(i) << " ";
	}
	std::cout << "\n";
}
