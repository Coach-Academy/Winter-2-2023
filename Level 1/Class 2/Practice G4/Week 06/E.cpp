#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int n,k,x;
    cin >> n >> k >> x;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int sum =0;
    reverse(a,a+n);
    for (int i = 0; i < k; ++i) {
        a[i] = x;
    }
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}