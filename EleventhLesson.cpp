#include "EleventhLesson.h"
class EleventhLesson::Radio
{
private:
	double frequency;
	std::string stationName;
public:
	void setAll(double frequency, std::string stationName)
	{
		this->frequency = frequency;
		this->stationName = stationName;
	}

	void outputAllIntoConsole()
	{
		printf("%f %s\n", frequency, stationName.c_str());
	}
};

class EleventhLesson::PCB
{
private:
	int width;
	int length;
	int layers;
	int mountingHoles;

public:
	void setAll(double width, int length, int layers, int mountingHoles)
	{
		this->width = width;
		this->length = length;
		this->layers = layers;
		this->mountingHoles = mountingHoles;
	}

	void outputAllIntoConsole()
	{
		printf("Width: %d\n Length:%d\n Layers: %d\n Mounting Holes: %d\n", width, length, layers, mountingHoles);
	}
};

class EleventhLesson::WiFi
{
private:
	char standart;
	float frequency;
public:
	EleventhLesson::WiFi();
	EleventhLesson::WiFi(char standart, float frequency)
	{
		this->standart = standart;
		this->frequency = frequency;
	}
	void outputAllIntoConsole()
	{
		try
		{
			printf("Standart: %c\n Frequency:%f Mhz\n", standart, frequency);
		}
		catch (const std::exception&)
		{
			std::cout << "You haven't initialized value\n";
		}

	}
};

class EleventhLesson::RangingDistanceDevice
{
private:
	int delay;
	int distance;
public:
	EleventhLesson::RangingDistanceDevice();
	EleventhLesson::RangingDistanceDevice(int delay)
	{
		this->delay = delay;
		distance = 3 * pow(10, 8) * (delay * pow(10, -6) / 2);
	}
	void outputAllIntoConsole()
	{
		try
		{
			printf("Delay: %d\n Distance:%d Mhz\n", delay, distance);
		}
		catch (const std::exception&)
		{
			std::cout << "You haven't initialized value\n";
		}

	}

};

class EleventhLesson::InfoAboutSputnik
{
private:
	double orbitHeight;
	double velocity;

public:
	EleventhLesson::InfoAboutSputnik(double orbitHeight, double velocity)
	{
		this->orbitHeight = orbitHeight;
		this->velocity = velocity;
	}

	double getOrbitHeight()
	{
		return orbitHeight;
	}
	double getVelocity()
	{
		return velocity;
	}
	bool operator>(EleventhLesson::InfoAboutSputnik sputnikData2)
	{
		return orbitHeight > sputnikData2.getOrbitHeight();
	}
	bool operator<(EleventhLesson::InfoAboutSputnik sputnikData2)
	{
		return orbitHeight < sputnikData2.getOrbitHeight();
	}
};

class EleventhLesson::OnePosisitonJoyStick
{
private:
	int position;
	bool isPressed;
public:
	EleventhLesson::OnePosisitonJoyStick(int position, bool isPressed)
	{
		this->position = position;
		// just in case. Because it could be pressed before "turning on" of joystick
		this->isPressed = isPressed;
	}

	void showInfoAboutJoystickState()
	{
		printf("The joystick is %s and %s pressed", (position < 0) ? "lowered" : (position > 0) ? "raised" : "in normal position",
			(isPressed) ? "is pressed" : "isn't pressed");
	}
};

class EleventhLesson::Reciever
{
private:
	int lowestFrequency;
	int currentFrequency;
	int maxFrequency;
	int amplifyingRatio;
	char modulationType;
	int intermediateFrequency;

public:
	void setAll(int lowestFrequency, int currentFrequency, int maxFrequency, int amplifyingRatio, char modulationType, int intermediateFrequency)
	{
		this->lowestFrequency = lowestFrequency;
		this->currentFrequency = currentFrequency;
		this->maxFrequency = maxFrequency;
		this->amplifyingRatio = amplifyingRatio;
		this->modulationType = modulationType;
		this->intermediateFrequency = intermediateFrequency;
	}

	int getLowestFrequency()
	{
		return lowestFrequency;
	}
	int getcurrentFrequency()
	{
		return currentFrequency;
	}
	int getMaxFrequency()
	{
		return maxFrequency;
	}
	int getAmplifyingRatio()
	{
		return amplifyingRatio;
	}
	char getModulationType()
	{
		return modulationType;
	}
	int getIntermediateFrequency()
	{
		return intermediateFrequency;
	}

	int getRange()
	{
		return maxFrequency - lowestFrequency;
	}

	int frequencyStepMultiply(int k)
	{
		return intermediateFrequency * k;
	}

	int getInversedFrequency()
	{
		return currentFrequency + 2 * intermediateFrequency;
	}
};