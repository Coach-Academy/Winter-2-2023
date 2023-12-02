#include <iostream>

using namespace std;

int main() {
    char a,b,c;
    cin >> a>> b >> c;
    if ( a == b && b ==c && a=='R')
        cout << 3 ;
    else if ((a ==b && b == 'R') || (b == c && c=='R') )
        cout << 2 ;
    else if ( a == 'R' || b == 'R' || c =='R')
        cout << 1 ;
    else
        cout << 0;
}