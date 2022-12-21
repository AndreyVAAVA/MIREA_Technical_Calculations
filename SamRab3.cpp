#include "SamRab3.h"

struct SamRab3::complex
{
public:
	double Rez;
	double Imz;
	void operator-= (complex& comp_number_2)
	{
		Rez -= comp_number_2.Rez;
		Imz -= comp_number_2.Imz;
	}
	complex operator/ (complex& comp_number_2)
	{
		complex el;
		el.Rez = (Rez * comp_number_2.Rez + Imz * comp_number_2.Imz) / (comp_number_2.Rez * comp_number_2.Rez + comp_number_2.Imz * comp_number_2.Imz);
		el.Imz = (comp_number_2.Rez * Imz - Rez * comp_number_2.Imz) / (comp_number_2.Rez * comp_number_2.Rez + comp_number_2.Imz * comp_number_2.Imz);
		return el;
	}

	complex* max(complex* comp_number_2)
	{
		double rez = comp_number_2->Rez;
		return (Rez > rez) ? this : comp_number_2;
	}

	void output()
	{
		printf("Rez = %f, Imz = %f. (%f + %fi)\n", Rez, Imz, Rez, Imz);
	}
};
struct SamRab3::LCDDisplay
{
public:
	std::string name;
	std::string screenOutput;
	std::array<int, 3> arr;

	void showScreenOutput()
	{
		std::cout << screenOutput << "\n";
	}
};

void SamRab3::task1()
{
	double Rez;
	double Imz;
	std::cin >> Rez >> Imz;
	complex comp1{ Rez, Imz};
	std::cin >> Rez >> Imz;
	complex comp2{ Rez, Imz};
	complex el = comp1 / comp2;
	el.output();
	comp1 -= comp2;
	comp1.output();
	complex* maximum = comp1.max(&comp2);
	maximum->output();
}

void SamRab3::task2_3()
{
	LCDDisplay disp1 = fill();
	LCDDisplay disp2 = fill();
	LCDDisplay disp3 = fill();
	showScreenOutputFromAllDisplays(disp1, disp2, disp3);
	showAllNamesThatAreFromSpringOrSummer3(disp1, disp2, disp3);
}

SamRab3::LCDDisplay SamRab3::fill()
{
	std::string name;
	std::string screenOutput;
	std::array<int, 3> arr;
	std::cin >> name;
	std::cin >> screenOutput;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	return LCDDisplay{ name, screenOutput, arr };
}



void SamRab3::showScreenOutputFromAllDisplays(LCDDisplay& disp1, LCDDisplay& disp2, LCDDisplay& disp3)
{
	disp1.showScreenOutput();
	disp2.showScreenOutput();
	disp3.showScreenOutput();
}

void SamRab3::showAllNamesThatAreFromSpringOrSummer3(LCDDisplay& disp1, LCDDisplay& disp2, LCDDisplay& disp3)
{
	showAllNamesThatAreFromSpringOrSummer(disp1);
	showAllNamesThatAreFromSpringOrSummer(disp2);
	showAllNamesThatAreFromSpringOrSummer(disp3);
}

void SamRab3::showAllNamesThatAreFromSpringOrSummer(LCDDisplay& disp)
{
	if (disp.arr[1] > 2 && disp.arr[1] < 9) std::cout << disp.name << "\n";
}

