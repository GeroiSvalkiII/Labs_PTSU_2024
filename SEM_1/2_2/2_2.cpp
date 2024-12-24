/*Посчитать произведение N первых натуральных чисел.*/

#include<iostream>
using namespace std;
int main()
{
	int n, pr=1;
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		pr = pr * i;
	}
	cout << pr << endl;
	return 0;
}