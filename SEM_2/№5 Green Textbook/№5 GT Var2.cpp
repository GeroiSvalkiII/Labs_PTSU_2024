/* Написать функцию транспонирования квадратной матрицы
(т.е.поворота исходной матрицы на 90 ).С ее помощью
определить является ли заданная матрица симметрической.
(Матрица называется симметрической, если
транспонированная матрица равна исходной).*/

#include <iostream>

using namespace std;

int main()
{
	const int n = 5;
	int t, f = 0, a[n][n] = { {1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5} };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n/2; i++)
	{
		for (int j = i; j < n-1-i; j++)
		{
			t = a[i][j];
			a[i][j] = a[4 - j][i];
			a[4 - j][i] = a[4 - i][4 - j];
			a[4 - i][4 - j] = a[j][4 - i];
			a[j][4 - i] = t;
			if (a[i][j] != a[4 - j][i] or a[4 - j][i] != a[4 - i][4 - j] or a[4 - i][4 - j] != a[j][4 - i])
			{
				f++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	if (f == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}