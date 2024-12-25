/*Найти максимальный элемент в последовательности (его значение и номер).
Последовательность n элементов задана формулой общего члена
ai = sin(n +
i
n
)*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n,nom,max;
	cin >> n ;
	max = sin(n + 1 / n);
	nom = 1;
	for (int i = 2; i < n + 1; i++)
	{
		if (max < sin(n + i / n))
		{
			max = sin(n + i / n);
			nom = i;
		}
	}
	cout << max << "  " << nom;
	return 0;
}