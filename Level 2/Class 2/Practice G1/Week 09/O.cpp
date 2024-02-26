#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    int cnt =0;
    while (n)
    {
        if ( n%2 == 0)
            cnt++;
        n/=2;
    }
    cout << (1ll << cnt) << endl;
    return 0;
}