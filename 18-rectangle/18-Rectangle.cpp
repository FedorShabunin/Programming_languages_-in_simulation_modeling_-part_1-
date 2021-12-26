#include <iostream>
#include <stdio.h>
#include <fstream>
#include <Windows.h>
#include<cstdlib>

using namespace std;

class CRectangle 
{
public:
	const double x_f, y_f, x_s, y_s;
	CRectangle(double x_f, double yL, double xR, double yR) : x_f(x_f), y_f(y_f), x_s(x_s), y_s(y_s) {};
};

void crossing(CRectangle rectangle1, CRectangle rectangle2) 
{
	int p = 1;
	if ((rectangle1.x_s < rectangle2.x_f) || (rectangle1.x_f > rectangle2.x_s)) 
	{
		p = 0;
	}
	else 
		if ((rectangle1.x_s >= rectangle2.x_f) && (rectangle1.x_f <= rectangle2.x_s) && ((rectangle1.y_s < rectangle2.y_f) || (rectangle1.y_s > rectangle2.y_f))) 
	{
		p = 0;
	}
	if (p == 0) 
	{
		cout << "Прямоугольники не пересекаются. \n";
	}
	else 
	{
		cout << "Прямоугольники пересекаются. \n";
	}
}

int main() 
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
	double x_11, x_21, y_11, y_21;
	double x_12, x_22, y_12, y_22;
	ifstream p("Coordinates.txt");
	p.open("Coordinates.txt");
	if(p.is_open())
	{
		cout << "Успешно \n";
	}
	if(!p.is_open())
	{
		cout << "Ошибка \n";
	}
	p >> x_11 >> x_21 >> y_11 >> y_21 >> x_12 >> x_22 >> y_12 >> y_22;
	CRectangle re1 (x_11, x_21, y_11, y_21);
	CRectangle re2 (x_12, x_22, y_12, y_22);
	crossing(re1, re2);
	return 0;
}