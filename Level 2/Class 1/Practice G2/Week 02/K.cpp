#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    itn tc;cin>>tc;
    while(tc--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            mp[a]++;
        }
        vector<int> v(n + 1);
        for (auto a: mp) {
            v[a.second]++;
        }
        
        int ans = 0, losing = 0;
        for (int i = 1; i <= n; i++) {
            if (v[i]) {
                ans = max(ans, i * ((int) mp.size() - losing));
                losing += v[i];
            }
        }

        cout << n - ans << endl;
    }

}
