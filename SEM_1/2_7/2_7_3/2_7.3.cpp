/*Напечатать квадрат из N звездочек.
Пустой квадрат со стороной N.
задать требования к минимальному N.*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Введите длину стороны квадрата, минимум 3" << endl;
	cin >> n;
	for (int i = n, fl=n; i > 0; i--,fl--)
	{
		if (fl == n or fl == 1)
		{
			for (int f =n;f>0;f-- )
			{
				cout << " *";
			}
			cout << endl;
		}
		else
		{
			cout << " *";
			for (int f = n - 2; f > 0; f--)
			{
				cout << "  ";
			}
			cout << " *" << endl;
		}
	}
	return 0;
}