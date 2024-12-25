#include <iostream>

using namespace std;

int main()
{
    int n;
    float a,b;
    cin >> n >> a >> b;
    switch(n)
    {
        case 1: cout << a + b << endl; break;
        case 2: cout << a - b << endl; break;
        case 3: cout << a * b << endl; break;
        case 4: if (b!=0) {cout << a/b << endl;} else {cout << "Ошибка" << endl;} break;
        default: cout << "Ошибка" << endl;
    }
    return 0;
}