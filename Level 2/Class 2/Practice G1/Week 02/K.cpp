#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >>n;
    map<int,int> mp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> v;
    for(auto &i : mp)
        v.push_back(i.second);

    sort(v.begin(),  v.end());

    int ans = n;
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
         int c = v[i];
         int before = sum;
         int after = n-sum;
         int cntafter = v.size() - i;
         int expected = cntafter *c;
         int removed =  before + (after - expected);
         ans = min( removed , ans);

         sum += v[i];
    }
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
        solve();
    }
    return 0;
}