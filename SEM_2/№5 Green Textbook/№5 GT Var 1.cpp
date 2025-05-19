/* Написать функцию транспонирования квадратной матрицы
(т.е.поворота исходной матрицы на 90 ).С ее помощью
определить является ли заданная матрица симметрической.
(Матрица называется симметрической, если
транспонированная матрица равна исходной).*/

#include<iostream>

using namespace std;

int main()
{
	const int n = 5;
	int t,f=0, a[n][n] = { {1,2,3,2,1},{2,3,4,3,2},{3,4,5,4,3},{2,3,4,3,2},{1,2,3,2,1} };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][j] != a[j][i])
			{
				f++;
			}
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
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