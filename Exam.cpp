#include "Exam.h"

long long Exam::task1(long long number)
{
	long long curr_size = 100;
	long long* arr = new long long[curr_size];
	long long curr_elem = 0;
	for (long long i = 1; i <= number /*lround(sqrt(number)) + 1*/ ; i++)
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

long long Exam::task2(long long* x_1, long long* x_2, long long size1, long long size2)
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

double Exam::task3(double x_1, double x_2)
{
	return sqrtf(x_1) + sqrtf(x_2);
}

double Exam::task3(double x_1, double x_2, double x_3)
{
	return sqrtf(x_1) + sqrtf(x_2) + sqrtf(x_3);
}

long long* Exam::expansion(long long* arr, long long curr_elem, long long curr_size)
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
