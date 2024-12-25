#include <iostream>
using namespace std;

int recchet(int n)
{
    if (n < 10){return n;}
    return n%10 + recchet(n/10);
}
int main()
{
    int num;
    cin >> num;

    int res = recchet(num);
    cout << res << endl;
    
    return 0;
}