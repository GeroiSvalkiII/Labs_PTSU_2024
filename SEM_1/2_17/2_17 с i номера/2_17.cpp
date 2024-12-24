/*Вычислить значение многочлена y = ∑n
i=0
x
i
i! = 1 + x +
x
2
1×2 + ⋯*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n,i,sum=0,x,fc=0;
	cin >> n >> i >> x;
	for (int f = n; f > 0; f--)
	{
		for (int g = 1; g < i + 1; ++g)
		{
			fc += g;
		}
		if (fc == 0)fc = 1;
		sum += (pow(x, i)) / fc;
		i++;
		fc = 0;
	}
	cout << sum;
	return 0;
}