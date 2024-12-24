/*напечатать заполненный прямоугольный равнобедренный треугольник из *
со сторонами катетов, равными N, и прямым углом слева снизу, где N —
натуральное число больше 2.*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int f = i; f > 0; f--)
		{
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}