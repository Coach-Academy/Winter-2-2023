#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a == b || b > a)
    cout << a;
    else if( a > b)
    cout << a-1;
    return 0;
}
