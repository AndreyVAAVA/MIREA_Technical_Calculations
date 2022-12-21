#include "DistanceMeter.h"

DistanceMeter::DistanceMeter(double maxRangeDistance, double minRangeDistance, double currentDistance)
{
	while (minRangeDistance > currentDistance || currentDistance > maxRangeDistance)
	{
		std::cout << "Enter values again: ";
		std::cin >> maxRangeDistance;
		std::cin >> minRangeDistance;
		std::cin >> currentDistance;
	}
	this->maxRangeDistance = maxRangeDistance;
	this->minRangeDistance = minRangeDistance;
	this->currentDistance = currentDistance;
}

void DistanceMeter::setMaxRangeDistance(double maxRangeDistance)
{
	if (minRangeDistance > currentDistance || currentDistance > maxRangeDistance)
	{
		do
		{
			std::cout << "Enter value again: ";
			std::cin >> maxRangeDistance;
		} while (minRangeDistance > currentDistance || currentDistance > maxRangeDistance);
	}
	this->maxRangeDistance = maxRangeDistance;
}
void DistanceMeter::setMinRangeDistance(double minRangeDistance)
{
	if (minRangeDistance > currentDistance || currentDistance > maxRangeDistance)
	{
		do
		{
			std::cout << "Enter value again: ";
			std::cin >> minRangeDistance;
		} while (minRangeDistance > currentDistance || currentDistance > maxRangeDistance);
	}
	this->minRangeDistance = minRangeDistance;
}
void DistanceMeter::setCurrentDistance(double currentDistance)
{
	if (minRangeDistance > currentDistance || currentDistance > maxRangeDistance)
	{
		do
		{
			std::cout << "Enter value again: ";
			std::cin >> currentDistance;
		} while (minRangeDistance > currentDistance || currentDistance > maxRangeDistance);
	}
	this->currentDistance = currentDistance;
}

double DistanceMeter::getMaxRangeDistance()
{
	return maxRangeDistance;
}
double DistanceMeter::getMinRangeDistance()
{
	return minRangeDistance;
}
double DistanceMeter::getCurrentDistance()
{
	return currentDistance;
}
;