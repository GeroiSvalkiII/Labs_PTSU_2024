#include <iostream>
using namespace std;
int main()
{
	int a, * p = &a;
	cin >> a;
	for (int i = *p-1; i > 0; i--)
	{
		*p = *p * i;
	}
	cout << *p << endl;
	return 0;
}