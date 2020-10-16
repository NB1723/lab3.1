// lab3.1.cpp
// Бущак Наталя
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 1
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;

	cout<< "x=";
	cin>> x;

	A = 1+9*x;

	if (x<=0)
		B = log(fabs(sin (x)))+(x*x*x*x*x*x*x);
	if (0<x && x<=3)
		B = 1./tan(fabs(x+1)/2);
	if (x>3)
		B = 3*x - x*x*x*x*x;
	y = A + B;

	cout << endl;
	cout <<"1)y="<<y<<endl;

	if (x<=0)
		B = log(fabs(sin (x)))+(x*x*x*x*x*x*x);
	else
		if (0<x && x<=3)
			B = 1/tan(fabs(x+1)/2);
		else B = 3*x - x*x*x*x*x;

	y= A + B;
	cout <<"2)y="<<y<<endl;

	system("pause");
 cin.get();
 return 0;
}
