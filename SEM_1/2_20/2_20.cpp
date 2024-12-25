/*Последовательность n элементов задана формулой общего члена
ai = sin(n +
i
n
). Проверить, если ли среди этих элементов элемент, равный S.*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n, s,fl=0;
	cin >> n >> s;
	for (int i = 1; i < n + 1; i++)
	{
		if (sin(n + i / n) == s)fl = 1;
	}
	if (fl == 1)cout << "Yes";
	else cout << "No";
	return 0;
}