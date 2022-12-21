#include "SamRab4.h"
class SamRab4::DistanceMeter
{
private:
	double maxRangeDistance;
	double minRangeDistance;
	double currentDistance;

public:
	SamRab4::DistanceMeter(double maxRangeDistance, double minRangeDistance, double currentDistance)
	{
		this->maxRangeDistance = maxRangeDistance;
		this->minRangeDistance = minRangeDistance;
		this->currentDistance = currentDistance;
	};
};

SamRab4::DistanceMeter::SamRab4::DistanceMeter()
{
}

SamRab4::DistanceMeter::~SamRab4::DistanceMeter()
{
}