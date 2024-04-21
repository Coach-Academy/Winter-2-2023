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
    while (t--) {
       int n,m;
       cin >> n >> m;

       string s,c,p;
       cin >> s >> c >> p;
       map<char , int> mp;
        for (int i = 0; i < n; ++i) {
            if (mp.find(s[i]) != mp.end())
                mp[s[i]] = min(c[i] - '0' , mp[s[i]]);
            else
                mp[s[i]] = c[i] - '0';
        }
        ll sum = 0;
        for (int i = 0; i < m; ++i) {
            if ( mp.find(p[i]) != mp.end())
                sum += mp[p[i]];
            else
            {
                sum = -1;
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}