#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin  >> n;
    int a[n];
    int mn = 0 , mx =0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > a[mx])
            mx = i;
        if ( a[i] <= a[mn])
            mn = i;
    }
    int steps = (mx) + (n-1 - mn);
    if ( mn < mx)
        steps--;
    cout << steps << endl;

    return 0;
}