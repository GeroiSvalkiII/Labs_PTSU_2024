/*Посчитать количество элементов, совпадающих с максимальным.
Последовательность n элементов задана формулой общего члена
ai = sin(n +
i
n
).*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n, k = 0, max;
	cin >> n;
	max = sin(n + 1 / n);
	for (int i = 2; i < n + 1; i++)
	{
		if (max < sin(n + i / n))max = sin(n + i / n);
	}
	for (int i = 1; i < n + 1; i++)
	{
		if (max == sin(n + i / n))k += 1;
	}
	cout << max << "  " << k;
	return 0;
}