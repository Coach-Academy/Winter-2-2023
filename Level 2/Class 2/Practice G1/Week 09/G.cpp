#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll l ,r;
        cin >> l >> r;
        for (ll i = 0; i < 61; ++i) {
            if ( (l | (1ll << i))  <= r)
            {
                l |= (1ll << i);
            }
        }
        cout << l << endl;
    }

    return 0;
}