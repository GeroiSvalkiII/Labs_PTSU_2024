/*Отрисовать проекцию пустого куба из звездочек со стороной N.*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a = n / 2;
	for (int i = a; i > 0; i--)
	{
		cout << "  ";
	}
	for (int i = n; i > 0; i--)
	{
		cout << " *";
	}
	cout << endl;
	for (int i = a - 1; i > 0; i--)
	{
		for (int f = i; f > 0; f--)
		{
			cout << "  ";
		}
		cout << " *";
		for (int f = n - 2; f > 0; f--)
		{
			cout << "  ";
		}
		cout << " *";
		for (int f = a - i-1; f > 0; f--)
		{
			cout << "  ";
		}
		cout << " *" << endl;
	}
	for (int i = n; i > 0; i--)
	{
		cout << " *";
	}
	for (int i = a - 1; i > 0; i--)
	{
		cout << "  ";
	}
	cout << " *" << endl;
	for (int i = a - 1; i > 0; i--)
	{
		cout << " *";
		for (int f = n - 2; f > 0; f--)
		{
			cout << "  ";
		}
		cout << " *";
		for (int f = a - 1; f > 0; f--)
		{
			cout << "  ";
		}
		cout << " *" << endl;
	}
	for (int i = a - 1; i > 0; i--)
	{
		cout << " *";
		for (int f = n - 2; f > 0; f--)
		{
			cout << "  ";
		}
		cout << " *";
		for (int f = i - 1; f > 0; f--)
		{
			cout << "  ";
		}
		cout << " *" << endl;
	}
	for (int i = n; i > 0; i--)
	{
		cout << " *";
	}
	return 0;
}