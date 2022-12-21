#pragma once
#include <iostream>
class TwelveLesson
{
public:
	class Robot
	{
	private:
		int xMovement;
		int angleX;
		int speed;
		int distance;
		int workingTime;
	public:
		TwelveLesson::Robot(int xMovement, int angleX, int speed, int distance, int workingTime);
		void printAll();
		double getTimeInMovement();
		bool areValuesNormal();
	};
	class NewRobot : public Robot
	{
	public:
		TwelveLesson::NewRobot(int xMovement, int angleX, int speed, int distance, int workingTime) : TwelveLesson::Robot(xMovement, angleX, speed, distance, workingTime)
		{
			/*
				��� ���������� ��������� � ������� ������ ���������������� ���� ��������������� ���������� ��������, ������� � ����������� ��������� ��������� �������� ���������:
				�������� ���������� ������� ������� ���������������:
					1. �������, �� ������� ������������ ��������������, ����������� �� n ���������� ��������, ������ ������ ��������������
					2. ��������������� ������� ����������� � ������, ��������������� ��������� ���������������
					3. ������� �������������� ����������� ��� ������������ ������ �������������� �� ��� ������.
			*/
		}
	};

};

