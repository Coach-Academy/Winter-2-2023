#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 5e5+7;
bool vis[N];
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,r;
        cin >> n >> r;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a,a+n , greater<>());
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (i && a[i-1] == a[i])
                continue;
            if ( a[i] - r*ans > 0)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}