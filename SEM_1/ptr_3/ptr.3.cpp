#include <iostream>
using namespace std;
int main()
{
	float a, b, * ap, * bp;
	a = 10.33;
	b = 5.11;
	ap = &a;
	bp = &b;
	cout << *ap + *bp << endl;
	return 0;
}