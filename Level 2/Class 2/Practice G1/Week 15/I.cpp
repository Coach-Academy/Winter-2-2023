#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
    int n;
    cin >> n;
    map<int,int> mp;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
       int x;
       cin >> x;
       if ( v.empty()  || v.back() != x)
           v.push_back(x);
    }
    int cnt =0 ;
    n = v.size();
    for (int i = 0; i < n; ++i) {
        if ( mp.count(v[i]) == 0)
        {
            cnt++;
            mp[v[i]] = 1;
        }
        else
        {
            mp.clear();
            mp[v[i]] = 1;
            mp[v[i-1]] = 1;
        }
    }
    cout << cnt << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
        doWork();
    return 0;
}