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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans  =0 ;
        for (int i = 0; i < n-1; ++i) {
            int mn = min(a[i], a[i+1]);
            int mx  = max( a[i], a[i+1]);
            while (mn*2 < mx)
                mn *= 2, ans++;
        }
        cout << ans << endl;
    }

    return 0;
}