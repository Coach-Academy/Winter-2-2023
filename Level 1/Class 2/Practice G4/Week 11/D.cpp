#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
    {
       int s,n;
       cin >> s >> n;
       vector<pair<int,int>> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i].first  >> v[i].second;
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < n; ++i) {
            if ( v[i].first  < s)
            {
                s += v[i].second;
            }
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
        cout << "YES\n";
    }

    return 0;
}
