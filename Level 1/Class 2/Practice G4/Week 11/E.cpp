#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
    {
       int n;
       cin >> n;
       int mn = 5;
        for (int i = 0,x; i < n; ++i) {
            cin >> x;
            mn = min( x, mn);
        }
        if ( mn == 1)
            cout << -1 << endl;
        else
            cout << 1 << endl;  

    }

    return 0;
}