#include <iostream>
using namespace std;
int main()
{ 
	int a, b,c;
	int *aptr, *bptr;
	a = 8;
	b = 9;
	aptr = &a;
	bptr = &b;
	c = *aptr;
	*aptr = *bptr;
	*bptr = c;
	cout << *aptr << endl;
	cout << *bptr << endl;
	cout << aptr << endl;
	cout << bptr << endl;
	return 0;
}