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

struct DSU {

    vector < int > par, Gsize;
    int components;

    DSU(int n = 0) : par(n + 5), Gsize(n + 5), components(n) {
        for(int i = 1; i <= n; i++)
            par[i] = i, Gsize[i] = 1;
    }

    // find the leader of the set that contain u
    int find_set(int u){
        return par[u] = (par[u] == u ? u : find_set(par[u]));
    }

    // check if u and v in the same set
    bool is_same_set(int u, int v){
        return find_set(u) == find_set(v);
    }

    // merge the sets that contain u and v
    bool union_sets(int u, int v){
        int leader_u = find_set(u), leader_v = find_set(v);
        if(leader_u == leader_v) return false;
        if(Gsize[leader_u] < Gsize[leader_v])
            swap(leader_u, leader_v);
        par[leader_v] = leader_u;
        Gsize[leader_u] += Gsize[leader_v];
        components--;
        return true;
    }

    // get the size of the set that contain u
    int get_size(int u){
        return Gsize[find_set(u)];
    }

    int get_components(){
        return components;
    }

    bool is_root(int u){
        return par[u] == u;
    }
};

ll bin_pow(ll b, ll e, ll m = Mod){
    ll res = 1;
    while(e > 0){
        if(e & 1) res = mul_mod(res, b, m);
        b = mul_mod(b, b, m);
        e >>= 1;
    }
    return res;
}

void Solve(){
    int n, k;
    cin >> n >> k;
    DSU dsu(n);
    for(int i = 0; i < n - 1; i++){
        int u, v, c;
        cin >> u >> v >> c;
        if(c == 0) // merge if the edge is red  
            dsu.union_sets(u, v);
    }
    ll total_seq = bin_pow(n, k);
    for(int u = 1; u <= n; u++)
        if(dsu.is_root(u))
            total_seq = sub_mod(total_seq, bin_pow(dsu.get_size(u), k), Mod);
    cout << total_seq << "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    // cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
        // cout << "Case #" << tc << ": ";
        Solve();
    }
    return 0;
}