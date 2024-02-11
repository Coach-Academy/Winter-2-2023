#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    ll x;
    cin >> x;
    ll as = x / sum;
    ll k = as * n;
    sum = as * sum;
    for (int i = 0; i < n; ++i) {
        k++;
        sum += a[i];
        if (sum > x)
            break;
    }
    cout << k << endl;

    return 0;
}