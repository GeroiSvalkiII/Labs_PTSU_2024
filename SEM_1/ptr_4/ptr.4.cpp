#include <iostream>
using namespace std;
int main()
{
	int n, c, *p = &c, ma, mi;
	cin >> n;
	cin >> *p;
	ma = *p;
	mi = *p;
	for (int i = 2; i <= n; i++)
	{
		cin >> *p;
		if (*p>ma)
		{ 
			ma = *p;
		}
		else
		{
			if(*p < mi) 
			{
				mi = *p;
			}
		}
	}
	cout << ma << endl;
	cout << mi << endl;
	return 0;
}