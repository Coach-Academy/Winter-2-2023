#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int f[20]={};
    for (int i = 0,x; i < n; ++i) {
        cin >> x;
        for (int j = 0; j < 20; ++j) {
            if( x & ( 1 << j))
                f[j]++;
        }
    }
    ll sum =0;
    for (int i = 0; i < n; ++i) {
        ll a =0;
        for (int j = 0; j < 20; ++j) {
            if (f[j] )
            {
                a += ( 1<< j);
                f[j]--;
            }
        }
        sum += a*a;
    }
    cout << sum  << endl;
    return 0;
}