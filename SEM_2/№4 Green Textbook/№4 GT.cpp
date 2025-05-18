//Вариант 8.
/*1) Сформировать одномерный массив целых чисел,
  используя датчик случайных чисел.
  2) Распечатать полученный массив.
  3) Удалить все элементы с заданным значением.
  4) Добавить перед каждым четным элементом массива
  элемент со значением 0.
  5) Распечатать полученный массив.*/

#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int r_min=1, r_max=20,n=44,k;
	const int  l = 45;
	int a[l];
	for (int i = 0; i < 45; i++)
	{
		a[i] = ((double)rand() / RAND_MAX) * (r_max - r_min) + r_min;
	}
	for (int i = 0; i < 45; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl<< endl << "Enter a number to delete in the range from 1 to 20" << endl;
	cout << endl;
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == k)
		{
			for (int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			n= n - 1;
			i--;
		}
	}
	if (a[n + 1] == k)
	{
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
	else
	{
		cout << endl;
		for (int i = 0; i < n+1; i++)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	cout << endl;
	k = 0;// Колхоз не прокатил шо тут делат надо то
	for (int i = 0; i+k < n; ++i)
	{
		if (a[i] % 2 == 0 and a[i] != 0)
		{
			for (int j = i; j < n; j++)
			{
				a[j + 1] = a[j];
			}
			n = n + 1;
			a[i] = 0;
			k++;
			i++;// это не ботаеть че то не перепрыгивает через  число
		}
	}
	cout << endl;
	for (int i = 0; i < n + 1; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
