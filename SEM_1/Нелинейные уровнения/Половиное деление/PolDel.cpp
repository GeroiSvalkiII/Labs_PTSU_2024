#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a=1,b=2,c,fA,fB,fC;
    double eps = 0.000001;

    while (b-a > eps)
    {
        c = (a+b)/2;
        fA=(pow(a,3)-a-1);
        fB=(pow(b,3)-b-1);
        fC=(pow(c,3)-c-1);

        if (fA*fC < 0) {b=c;}
        else if (fC*fB < 0) {a=c;}
        else {cout << "Ошибка" << endl;}
    }

    cout << a << endl << b << endl;
    return 0;
}