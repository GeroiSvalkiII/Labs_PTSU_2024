#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int range_min, range_max, t;
	int a[50];
	const int n = 10;
	range_min = 2;
	range_max = 280;
	for (int i = 0; i < 10; i++)
	{
		a[i] = ((double)rand() / RAND_MAX) * (range_max -
			range_min) + range_min;
		cout << a[i] << " ";
	}
	cout << endl;

	int min_index;

	for (int i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min_index])
			{
				min_index = j;
			}
		}
		t = a[min_index];
		a[min_index] = a[i];
		a[i] = t;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}