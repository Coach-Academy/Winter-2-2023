#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,d;
    cin >> n >> d;
    int a[n];
    int freq1[(int) 2e4+50]={} ,freq2[(int) 2e4+50]={};
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq2[a[i]]++;
    }
    ll ans =0;
//    for (int i = 0; i < n; ++i) {
//        freq2[a[i]] --;
//
//
//        ans += ( freq1[a[i] - d] * freq2[a[i] + d]);
//
//        freq1[a[i]] ++;
//    }
    for (int i = d; i <= 2e4 ; ++i) {
        ans += ( 1ll * freq2[i]  * freq2[i-d] * freq2[i+d]);
    }
    cout << ans << endl;
    return 0;
}