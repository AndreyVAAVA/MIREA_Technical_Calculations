#pragma once
#include <iostream>
class DistanceMeter
{
private:
	double maxRangeDistance;
	double minRangeDistance;
	double currentDistance;
public:
	DistanceMeter(double maxRangeDistance, double minRangeDistance, double currentDistance);

	void setMaxRangeDistance(double maxRangeDistance);
	void setMinRangeDistance(double minRangeDistance);
	void setCurrentDistance(double currentDistance);

	double getMaxRangeDistance();
	double getMinRangeDistance();
	double getCurrentDistance();
};

