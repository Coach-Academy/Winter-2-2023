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
vector < int > vis, topology;

// 0 -> not visited
// 1 -> visited and in the stack
// 2 -> visisted but not in the stack

bool is_cycle(int u){
    // in the current stack
    vis[u] = 1;
    for(auto& v : adj[u]){
        if(!vis[v]){
            if(is_cycle(v))
                return true;
        }else if(vis[v] == 1)
            return true;
    }
    // visit but out of the stack
    vis[u] = 2;
    topology.push_back(u);
    return false;
}

void Solve(){
    topology.clear();
    adj = vector < vector < int > > (n + 5);
    vis = vector < int > (n + 5);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for(int u = 1; u <= n; u++)
        if(!vis[u] && is_cycle(u))
            return cout << "IMPOSSIBLE\n", void();
    reverse(all(topology));
    for(auto& u : topology)
        cout << u << '\n';
}

int main(){
    FAST_IO();
    while(cin >> n >> m && (n || m))
        Solve();
    return 0;
}
