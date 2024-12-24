/*Напечатать заполненный прямоугольный равнобедренный треугольник из *
со сторонами катетов, равными N, и прямым углом справа снизу, где N —
натуральное число больше 2.*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = n,fl=1; i > 0; i--,fl++)
	{
		for (int f =( i - 1)*2; f > 0; f--)
		{
			cout << " ";
		}
		for (int f = fl; f > 0; f--)
		{
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}