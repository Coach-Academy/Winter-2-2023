#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
   int n;
   cin >> n;
   int a[n];
   map<int,int> mp;
   int ans = 1e6;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (mp.count(a[i]))
        {
            ans = min(ans , i - mp[a[i]] +1);
        }
        mp[a[i]] = i;
    }
    if ( ans == 1e6)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}