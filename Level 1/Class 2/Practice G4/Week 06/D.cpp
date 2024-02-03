#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    int arr[n];
    ll c =0;
    for (int i = 0; i < n; ++i) {
        int a,b;
        cin  >> a>> b;
        c += a;
        arr[i] = (a-b);
    }
    int cnt = 0;
    sort(arr, arr+n);
    reverse(arr,arr+n);

    sort(arr,arr+n , greater<int>());

    for (int i = 0; i < n; ++i) {
        if ( c > m)
        {
            cnt++;
            c -= (arr[i]);
        }
    }
    if ( c > m)
        cout  << -1 << endl;
    else
        cout << cnt << endl;

    return 0;
}