/*Напечатать квадрат из N звездочек.
Заполненный квадрат со стороной N
задать требования к минимальному N.*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Введите длину стороны квадрата" << endl;
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		for(int f = n; f > 0; f--)
		{
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}