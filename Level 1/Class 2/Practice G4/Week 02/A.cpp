#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int p = a+b;
    int m = a-b;
    int mul = a*b;
    if ( p >= m && p>=mul )
        cout << p ;
    else if ( m >= p && m>=mul)
        cout << m;
    else
        cout << mul;
}