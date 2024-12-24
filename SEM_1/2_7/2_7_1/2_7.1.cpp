/*Напечатать квадрат из N звездочек.
В котором ВСЕГО N звездочек.
задать требования к минимальному N.*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,a;
	cout << "Введите число n в 2-степени!!!!!!" << endl;
	cin >> n;
	a = sqrt(n);
	for (int i = a; i > 0; i--)
	{
		for (int f = a; f > 0; f--)
		{
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}