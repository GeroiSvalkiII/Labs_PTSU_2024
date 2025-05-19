#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int r, range_min, range_max, t;
	srand(time(0));
	const int n = 10;
	int a[n];
	range_min = 2;
	range_max = 280;
	for (int i = 0; i < n; i++)
	{
		a[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}