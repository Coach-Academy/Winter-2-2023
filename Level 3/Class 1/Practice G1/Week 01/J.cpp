#include <bits/stdc++.h>

using namespace std;

#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) + (m) - 1) / (m))
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
constexpr int INF = 1 << 30, Mod = 1e9 + 7;
constexpr ll LINF = 1LL << 62;
#define PI acos(-1)
template < typename T = int > using Pair = pair < T, T >;
vector < string > RET = {"NO", "YES"};

template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}

template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) { 
    for (const T &x : v) out << x << ' '; 
    return out;
}

void FAST_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

vector < int > val, goal, xr_val, picked_nodes;
vector < vector < int > > adj;

void dfs(int u, int p = -1, int d = 0){
    val[u] ^= xr_val[d & 1];
    if(goal[u] != val[u]){
        xr_val[d & 1] ^= 1;
        picked_nodes.push_back(u);
    }
    for(auto& v : adj[u])
        if(v != p)
            dfs(v, u, d + 1);
    if(goal[u] != val[u])
        xr_val[d & 1] ^= 1;
}

void Solve(){
    int n;
    cin >> n;
    val = goal = vector < int > (n + 5);
    adj = vector < vector < int > > (n + 5);
    xr_val = vector < int > (2);
    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; i++)
        cin >> val[i];
    for(int i = 1; i <= n; i++)
        cin >> goal[i];
    dfs(1);
    cout << sz(picked_nodes) << '\n';
    for(auto& x : picked_nodes)
        cout << x << '\n';
}

int main(){
    FAST_IO();
    int test_cases = 1;
    // cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
        // cout << "Scenario #" << tc << ":\n";
        Solve();
    }
    return 0;
}
