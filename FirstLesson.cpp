#include "FirstLesson.h"

void FirstLesson::firstTask() {
	double number;
	std::cin >> number;
	std::cout << number * -1 << fabs(number) << "\n";
}

void FirstLesson::secondTask() {
	auto chr = 'a';
	auto integ = INT_MAX;
	auto lng = LLONG_MAX;
	auto dbl = DBL_MAX;
	std::cout << chr << " " << integ << " " << lng << " " << dbl << "\n";
}

void FirstLesson::ThirdTask()
{
	int sz_int = sizeof(int);
	int sz_flt = sizeof(float);
	int sz_dbl = sizeof(double);
	int sz_lng = sizeof(long);
	int sz_lng_lng = sizeof(long long);
	int sz_bl = sizeof(bool);
	int sz_cr = sizeof(char);
	printf("%d %d %d %d %d %d %d\n", sz_int, sz_flt, sz_dbl, sz_lng, sz_lng_lng, sz_bl, sz_cr);
}

void FirstLesson::fourthTask()
{
	double numb1, numb2;
	std::cin >> numb1;
	std::cin >> numb2;
	std::cout << fmax(numb1, numb2);
}

void FirstLesson::fifthTask()
{
	double a;
	std::cin >> a;
	std::cout << sqrt(a)*pow(sin(3*a + 1), 2);
}

void FirstLesson::sixTask()
{
	double b, c, d;
	std::cin >> b >> c >> d;
	auto z1 = pow(cos((float)3 / 8 * M_PI - b / 4), 2) - pow(cos((float)11 / 8 * M_PI + b / 6), 2);
	auto z2 = (pow(c, 2) + 2*c - 3*(c+1)*sqrt(pow(c, 2) - 9))/(3*pow(c, 2) - 2*c -3*(c-1)*sqrt(pow(c, 2) + 4));
	auto z3 = (1 - tan((float)d/2))/(1+tan((float)d/2));
	std::cout << z1 << " " << z2 << " " << z3 << "\n";
}

