#include "NinthLesson.h"

struct NinthLesson::Element
{
	std::string name;
	int impedance;
	int current;
	int frequency;
	Element(std::string name, int impedance, int current, int frequency)
	{
		this->name = name;
		this->impedance = impedance;
		this->current = current;
		this->frequency = frequency;
	}
	void output()
	{
		printf("%s %d %d %d\n", name.c_str(), impedance, current, frequency);
	}
};

struct NinthLesson::Transmitter
{
private:
	float basedFrequency;
	char modulationType;
	bool isAllowedToTransmit;
public:
	Transmitter(float basedFrequency, char modulationType, bool isAllowedToTransmit)
	{
		this->basedFrequency = basedFrequency;
		this->modulationType = modulationType;
		this->isAllowedToTransmit = isAllowedToTransmit;
	}

	Transmitter()
	{

	}

	void output()
	{
		printf("%f %c %s\n", basedFrequency, modulationType, isAllowedToTransmit ? "True" : "False");
	}

	void setFields(float basedFrequency, char modulationType, bool isAllowedToTransmit)
	{
		this->basedFrequency = basedFrequency;
		this->modulationType = modulationType;
		this->isAllowedToTransmit = isAllowedToTransmit;
	}

	void task3_1(Transmitter& tr)
	{
		float basedFrequency;
		char modulationType;
		bool isAllowedToTransmit;
		std::cin >> basedFrequency >> modulationType >> isAllowedToTransmit;
		tr.setFields(basedFrequency, modulationType, isAllowedToTransmit);
	}

	void task3_2(Transmitter& tr)
	{
		tr.output();
	}
};

struct NinthLesson::Antenna
{
public:
	float knd;
	int arr[4];
	double length;
	void output()
	{
		std::cout << knd << " ";
		for (auto el : arr)
		{
			std::cout << el << " ";
		}
		std::cout << length << "\n";
	}

	void operator > (Antenna ant)
	{
		(length > ant.length) ? output() : ant.output();
	}

	void operator < (Antenna ant)
	{
		(length < ant.length) ? ant.output() : output();
	}
};

struct NinthLesson::Target
{
	int type;
	std::string name;
	bool own = 0;
	float V;
	float d;

	Target(int type, std::string name, bool own, float V, float d)
	{
		this->type = type;
		this->name = name;
		this->own = own;
		this->V = V;
		this->d = d;
	}

	Target(int type, std::string name, float V, float d)
	{
		this->type = type;
		this->name = name;
		this->V = V;
		this->d = d;
	}
};

void NinthLesson::task1()
{
	auto el = Element("Diod", 10, 2, 600);
	el.output();
}

void NinthLesson::task2()
{
	float basedFrequency;
	char modulationType;
	bool isAllowedToTransmit;
	std::cin >> basedFrequency >> modulationType >> isAllowedToTransmit;
	auto tr = Transmitter(basedFrequency, modulationType, isAllowedToTransmit);
	tr.output();
}

void NinthLesson::task3()
{
	Transmitter tr;
	tr.task3_1(tr);
	tr.task3_2(tr);
}

void NinthLesson::task4()
{
	Antenna ant1{ 52.5, {1, 2, 3, 4}, 6000 };
	Antenna ant2{ 55.5, {3, 2, 5, 4}, 10000 };
	ant1.output();
	ant1 > ant2;
}

void NinthLesson::task5()
{
	Target targ1{ 1, "Board", 1, 52.444, 45.88 };
	Target targ2( 2, "Plane", 66.343, 47.77 );
	Target targ3( 3, "Helicopter", 84.88, 77.22);
	Target targ4{ 4, "Rocket", 1, 168.44, 999.666 };
}
