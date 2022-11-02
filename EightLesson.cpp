#include "EightLesson.h"
#include <iostream>
void EightLesson::task2(int* arr, int size)
{
	int* l = arr;
	int* r = arr + size - 1;
	anotherRQSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void EightLesson::quicksort(int* l, int* r)
{
	if (r - l <= 1) return;
	int z = *(l + (r - l)/ 2);
	int* ll = l, * rr = r - 1;
	while (ll <= rr)
	{
		while (*ll < z) ll++;
		while (*rr > z)	rr--;
		if (ll <= rr)
		{
			std::swap(*ll, *rr);
			ll++;
			rr--;
		}
	}
	if (l < rr) quicksort(l, rr + 1);
	if (ll < r) quicksort(ll, r);
}

void EightLesson::anotherQSort(int* arr, int size)
{
	int i = 0;
	int j = size - 1;
	int mid = arr[size / 2];
	do
	{
		while (arr[i] < mid) i++;
		while (arr[j] > mid) j--;
		if (i <= j)
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;

			i++;
			j--;
		}
	} while (i <= j);
	if (j > 0) anotherQSort(arr, j + 1);
	if (i < size) anotherQSort(&arr[i], size - i);
}

void EightLesson::anotherRQSort(int* arr, int size)
{
	int i = 0;
	int j = size - 1;
	int mid = arr[size / 2];
	do
	{
		while (arr[i] > mid) i++;
		while (arr[j] < mid) j--;
		if (i <= j)
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;

			i++;
			j--;
		}
	} while (i <= j);
	if (j > 0) anotherRQSort(arr, j + 1);
	if (i < size) anotherRQSort(&arr[i], size - i);
}

void EightLesson::reverseQuicksort(int* l, int* r)
{
	if (r - l <= 1) return;
	int z = *(l + (r - l) / 2);
	int* ll = l, * rr = r;
	while (ll <= rr)
	{
		while (*ll > z) ll++;
		while (*rr < z)	rr--;
		if (ll <= rr)
		{
			std::swap(*ll, *rr);
			ll++;
			rr--;
		}
	}
	if (l > rr) quicksort(l, rr + 1);
	if (ll > r) quicksort(ll, r);
}
