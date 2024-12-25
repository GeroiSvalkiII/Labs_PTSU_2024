/*Вычислить сумму S = 1 + 2 − 3 + 4 + 5 − 6 + 7 + 8 − 9. . . до N слагаемых.*/

#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		if (i % 3 == 0)  sum -= i;
		else sum += i;
	}
	cout << sum;
	return 0;
}