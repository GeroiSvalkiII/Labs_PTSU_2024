/*Посчитать сумму
S = 1 ∗ 2 + 2 ∗ 3 ∗ 4 + 3 ∗ 4 ∗ 5 ∗ 6 + 4 ∗ 5 ∗ 6 ∗ 7 ∗ 8+. . . . до N
(натурального числа) по порядку*/

#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cin >> n;
	for (int i = n, f = (n-1); f > 0; i--, f--)
	{
		sum += f * i;
	}
	cout << sum << endl;
	return 0;
}