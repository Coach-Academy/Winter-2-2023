#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ll n;
    cin >> n;
    if ( n%2 )
    {
        cout << -((n+1)/2) << endl;
    }
    else
        cout << n/2 << endl;
    return 0;
}