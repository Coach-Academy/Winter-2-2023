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
    ll sum =0;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    ll x;
    cin >> x;
    ll k = (x/sum)*n;
    x = x%sum;
    for (int i = 0; i < n; ++i) {
        x-=a[i];
        k++;
        if ( x < 0)
            break;
    }
    cout << k << endl;

    return 0;
}