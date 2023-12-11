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
    vector < ll > Gsum;
    int components;

    DSU(int n = 0) : par(2 * n + 5), Gsize(2 * n + 5), Gsum(2 * n + 5), components(n) {
        for(int i = 1, j = n + 1; i <= n; i++, j++){
            par[i] = j, Gsize[j] = 1;
            par[j] = j, Gsum[j] = i;
        }
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
        Gsum[leader_u] += Gsum[leader_v];
        components--;
        return true;
    }

    // move u to the set that contain v
    bool move_to_set(int u, int v){
        int leader_u = find_set(u), leader_v = find_set(v);
        if(leader_u == leader_v) return false;
        Gsum[leader_u] -= u, Gsum[leader_v] += u;
        Gsize[leader_u]--, Gsize[leader_v]++;
        par[u] = leader_v;
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

    ll get_sum(int u){
        return Gsum[find_set(u)];
    }
};

int n, m;

void Solve(){
    DSU dsu(n);
    while(m--){
        int type, u, v;
        cin >> type;
        if(type == 1){
            cin >> u >> v;
            dsu.union_sets(u, v);
        }
        if(type == 2){
            cin >> u >> v;
            dsu.move_to_set(u, v);
        }
        if(type == 3){
            cin >> u;
            cout << dsu.get_size(u) << ' ' << dsu.get_sum(u) << '\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    while(cin >> n >> m && n && m)
        Solve();
    return 0;
}