/*Cоздать программу для деления двух чисел(одно на другое).
Предусмотреть, что они могут быть равными 0 (и на ноль
	делить нельзя).*/
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (b == 0)
	{
		cout << "Нет решения, знаминатель равен 0" << endl;
	}
	else
	{
		cout << a / b << endl;
	}
	return 0;
}