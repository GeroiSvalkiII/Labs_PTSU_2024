#include <iostream>
using namespace std;
int main()
{
	int a, b, *ap, *bp;
	a = 10;
	b = 5;
	ap = &a;
	bp = &b;
	cout << *ap + *bp << endl;
	return 0;
}