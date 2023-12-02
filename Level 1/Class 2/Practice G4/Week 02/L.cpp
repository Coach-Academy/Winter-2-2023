#include <iostream>

using namespace std;

int main() {
    long long n,k;
    cin >> n >> k;
    long long  odds = n/2 + (n%2);
    if ( k<= odds)
    {
        cout << k*2 -1 ;
    }
    else
    {
        cout << (k-odds)*2;
    }
}