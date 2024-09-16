// Lab_03_2.cpp
// < Коць Олексій>
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 15


#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double x; // вхідний аргумент 
	double a; // вхідний параметр
	double b; // вхідний параметр 
	double c; // вхідний параметр 
	double F; // результат обчислення виразу

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if (x < 0 && b != 0)
		F =  (- a) * pow(x, 2) + b;
	if (x > 0 && b == 0)
		F = x / (x - c) + 5.5;
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = x / (-c);

	cout << endl;
	cout << "1) F = " << F << endl;

	// спосіб 2: розгалуження в повній формі
	if (x < 0 && b != 0)
		F = (- a) * pow(x, 2) + b;
	else 
		if (x > 0 && b == 0)
			F = x / (x - c) + 5.5;
		else 
			F = x / (-c);

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}