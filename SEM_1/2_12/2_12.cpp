/*Последовательность из N положительных чисел вводится с клавиатуры.
Найти сумму максимального и минимального элементов последовательности.*/

#include<iostream>
using namespace std;
int main()
{
	int n, a, min, max;
	cin >> n;
	cin >> a;
	max = a;
	min = a;
	for (int i = n; i > 1; i--)
	{
		cin >> a;
		if (a > max) max = a;
		if (a < min) min = a;
	}
	cout << min + max;
	return 0;
}