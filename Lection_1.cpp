#include "Lection_1.h"

class Lection_1::Sample
{

private:
	int max_i, min_i;
	std::string name;

public:
	Sample();
	~Sample();
	
	void setMax_i(int max_i)
	{
		this->max_i = max_i;
	}

	void setMin_i(int min_i)
	{
		this->min_i = min_i;
	}

	void setName(std::string name)
	{
		this->name = name;
	}

	int getMax_i()
	{
		return max_i;
	}

	int getMin_i()
	{
		return min_i;
	}

	std::string getName()
	{
		return name;
	}
};

Lection_1::Sample::Sample()
{

}

Lection_1::Sample::~Sample()
{
	delete& name;
}

int Lection_1::getAvgValueOfMAXValues(std::vector<Sample> vect)
{
	Sample& val = vect.at(0);
	int max_i = 0;
	for (int i = 0; i < vect.size(); i++)
	{
		max_i += vect.at(0).getMax_i();
	}
	return max_i;
}
