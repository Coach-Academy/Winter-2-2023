#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define AboTaha_on_da_code ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define X first
#define Y second

const int dx[8]={0, 0, 1, -1, 1, -1, -1, 1}, dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
const ll M = 1e9+7, M2 = 998244353;
const double EPS = 1e-8;

void burn()
{
    int n, m; cin >> n >> m;
    vector <vector <pair<int, int>>> adj(n), invadj(n);
    for (int i = 0; i < m; i++) {
        int f, s, w; cin >> f >> s >> w;
        f--, s--;
        adj[f].push_back({s, w});
        invadj[s].push_back({f, w});
    }
    int a[3];
    for (auto &i : a) cin >> i, i--;
    sort(a, a+3);
    vector <ll> dist[3];
    for (auto &i : dist) i.assign(n, 2e18);
    for (int i = 0; i < 3; i++) {
        dist[i][a[i]] = 0;
        priority_queue <pair<int, int>, vector <pair<int, int>>, greater<>> pq;
        pq.push({0, a[i]});
        while(!pq.empty()) {
            auto [dis, cur] = pq.top(); pq.pop();
            for (auto &ch : adj[cur]) {
                if (dist[i][ch.X] > dis+ch.Y) {
                    dist[i][ch.X] = dis+ch.Y;
                    pq.push({dist[i][ch.X], ch.X});
                }
            }
        }
    }
    vector <ll> invdist[3];
    for (auto &i : invdist) i.assign(n, 2e18);
    for (int i = 0; i < 3; i++) {
        invdist[i][a[i]] = 0;
        priority_queue <pair<int, int>, vector <pair<int, int>>, greater<>> pq;
        pq.push({0, a[i]});
        while(!pq.empty()) {
            auto [dis, cur] = pq.top(); pq.pop();
            for (auto &ch : invadj[cur]) {
                if (invdist[i][ch.X] > dis+ch.Y) {
                    invdist[i][ch.X] = dis+ch.Y;
                    pq.push({invdist[i][ch.X], ch.X});
                }
            }
        }
    }
    pair<ll, ll> ans{2e18, 2e18};
    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < n; i++) {
            if (dist[(k+1)%3][i] + dist[(k+2)%3][i] + invdist[k][i] < ans.X) {
                ans = {dist[(k+1)%3][i] + dist[(k+2)%3][i] + invdist[k][i], a[k]};
            }
        }
    }
    if (ans.Y > (ll)1e18) cout << -1;
    else cout << ans.Y+1 << ' ' << ans.X;
}

int main()
{
    AboTaha_on_da_code

    // freopen("self.in", "r", stdin);
    /*freopen("output.txt", "w", stdout);*/

    int t = 1; // cin >> t;
    for (int i = 1; i <= t; i++) {
        burn();
        cout << '\n';
    }
    return 0;
}