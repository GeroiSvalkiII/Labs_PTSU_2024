/*Дано натуральное число N, проверить, входить ли цифра S в запись этого
числа.*/

#include <iostream>
using namespace std;
int main()
{
	int n,s,f=0;
	cin >> n >> s;
	while (n > 0)
	{
		if (s == n % 10)
		{
			f = 1;
		}
		n /= 10;
	}
	if (f == 1) cout << "Yes";
	else cout << "No";
	return 0;
}