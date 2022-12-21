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
				Для вычисления интеграла с помощью языков программирования моно воспользоваться следующими методами, которые с достаточной точностью вычисляют значение интеграла:
				Алгоритм вычисления методом средних прямоугольников:
					1. Участок, на котором производится интегрирование, разбивается на n одинаковых отрезков, равных ширине прямоугольника
					2. Подынтегральная функция вычисляется в точках, соответствующих серединам прямоугольников
					3. Площадь прямоугольника вычисляется как произведение ширины прямоугольника на его высоту.
			*/
		}
	};

};

