/*напечатать заполненный прямоугольный равнобедренный треугольник из *
со сторонами катетов, равными N, и прямым углом справа сверху, где N —
натуральное число больше 2.*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = n,fl=0; i > 0; i--,fl+=2)
	{
		for (int f = fl; f > 0; f--)
		{
			cout << " ";
		}
		for (int f = i; f > 0; f--)
		{
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}