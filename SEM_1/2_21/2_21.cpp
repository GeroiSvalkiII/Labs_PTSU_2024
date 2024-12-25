/*Числа вводятся с клавиатуры до тех пор, пока не встретится число 0 (0 —
признак окончания ввода). Проверить, упорядочены ли числа по возрастанию.*/

#include<iostream>
using namespace std;
int main()
{
	int n,a,fl=0;
	cin >> n;
	a = n;
	while (n != 0)
	{
		cin >> n;
		if ((a > n) && (n!=0))fl = 1;
		a = n;
	}
	if (fl == 0)cout << "Yes";
	else cout << "No";
	return 0;
}