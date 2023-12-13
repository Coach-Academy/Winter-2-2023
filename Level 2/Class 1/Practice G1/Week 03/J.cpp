#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, q1, q2;
        cin >> n >> q1 >> q2;
        ll arr[n + 1]={0}, par[q1 + 5]={0}, par2[n + 5]={0};
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        pair<int, int> vec[q1 + 1];
        ll cost[q1 + 1];
        for (int i = 1; i <= q1; i++) {
            cin >> vec[i].first >> vec[i].second >> cost[i];
        }
        int l, r;
        while (q2--) {
            cin >> l >> r;
            par[l]++;
            par[r + 1]--;
        }
        for (int i = 1; i <= q1; i++) {
            par[i] += par[i - 1];
            ll num = par[i];
            l = vec[i].first;
            r = vec[i].second;
            par2[l] += cost[i] * num;
            par2[r + 1] -= cost[i] * num;
        }
        for (int i = 1; i <= n; i++)par2[i] += par2[i - 1];
        for (int i = 1; i <= n; i++) {
            cout << arr[i] + par2[i] << ' ';
        }
    }
}