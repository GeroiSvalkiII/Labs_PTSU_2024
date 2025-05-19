#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int r, range_min, range_max, k;
	int a[10];
	range_min = 2;
	range_max = 280;
	int n = 10;
	for (int i = 0; i < 10; i++)
	{
		a[i] = ((double)rand() / RAND_MAX) * (range_max -
			range_min) + range_min;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		k = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > k)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}