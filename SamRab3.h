#pragma once
#include <iostream>
#include <array>
class SamRab3
{
public:
	struct complex;
	struct LCDDisplay;

	void task1();

	void task2_3();

	LCDDisplay fill();

	void showScreenOutputFromAllDisplays(LCDDisplay& disp1, LCDDisplay& disp2, LCDDisplay& disp3);

	void showAllNamesThatAreFromSpringOrSummer3(LCDDisplay& disp1, LCDDisplay& disp2, LCDDisplay& disp3);
	
	void showAllNamesThatAreFromSpringOrSummer(LCDDisplay& disp);
	
	
};

