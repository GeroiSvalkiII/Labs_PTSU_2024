/*Решите квадратное уравнение вида a ∗ x
2 + b ∗ x + c = 0. Коэффициенты
уравнения вводятся с клавиатуры.*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c,D,x1,x2;
	cin >> a;
	cin >> b;
	cin >> c;
	D = b * b - 4 * a * c;
	if (D == 0)
	{
		x1 = -b / (2 * a);
		cout << x1 ;
		cout << " Одно решение";
	}
	if (D > 0)
	{
		D = sqrt(D);
		x1 = (-b + D) / (2 * a);
		x2 = (-b - D) / (2 * a);
		cout << x1;
		cout << " ; ";
		cout << x2;
		cout << " Два решения";
	}
	if (D < 0) cout << " нет решения";
	return 0;
}