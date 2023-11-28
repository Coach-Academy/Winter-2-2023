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

int n, m;
vector < vector < int > > adj;
vector < bool > vis;

int dfs(int u){
    vis[u] = true;
    int size = 1;
    for(auto& v : adj[u])
        if(!vis[v])
            size += dfs(v);
    return size;
}

void Solve(){
    map < string, int > idx;
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        idx[s] = i;
    }
    adj = vector < vector < int > > (n + 5);
    vis = vector < bool > (n + 5);
    for(int i = 0; i < m; i++){
        string u, v;
        cin >> u >> v;
        adj[idx[u]].push_back(idx[v]);
        adj[idx[v]].push_back(idx[u]);
    }
    int max_component = 0;
    for(int u = 1; u <= n; u++)
        if(!vis[u])
            max_component = max(max_component, dfs(u));
    cout << max_component << '\n';
}

int main(){
    FAST_IO();
    while(cin >> n >> m && (n || m))
        Solve();
    return 0;
}
