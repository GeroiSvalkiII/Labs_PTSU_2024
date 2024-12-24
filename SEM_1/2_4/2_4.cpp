/*Напечатать в консоли равнобедренный треугольник из
звездочек ( * ) с вершиной, направленной вверх, и основанием
N, где N — натуральное нечетное число больше 3.*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int prb = n / 2, fl = n/2+2;
	for (int i = (n + 1) / 2; i >0 ; i--)
	{
		for (int f = prb; f > 0; f--)
		{
			cout << " ";
		}
		prb -= 1;
		for (int f = fl - i; f > 0; f--)
		{
			cout << "*";
		}
		fl += 1;
		cout << endl;
	}
	return 0;
}