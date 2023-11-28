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

vector < vector < int > > adj;
vector < bool > vis;

int dfs(int u){
    vis[u] = true;
    int max_height = 1;
    for(int v : adj[u])
        if(!vis[v])
            max_height = max(max_height, 1 + dfs(v));
    return max_height;
}

void Solve(){
    int n;
    cin >> n;
    adj = vector < vector < int > > (n + 5);
    vis = vector < bool > (n + 5);
    vector < int > par(n + 5);
    for(int i = 1; i <= n; i++){
        cin >> par[i];
        if(~par[i]) adj[par[i]].push_back(i);
    }
    int max_height_tree = 0;
    for(int u = 1; u <= n; u++)
        if(par[u] == -1)
            max_height_tree = max(max_height_tree, dfs(u));
    cout << max_height_tree << '\n';
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
