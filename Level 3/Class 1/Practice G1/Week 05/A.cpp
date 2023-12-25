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

template < typename T = int > struct Edge {
    int u, v;
    T w;

    Edge(int _u = 0, int _v = 0, T _w = 0) : u(_u), v(_v), w(_w) {}

    friend istream& operator >> (istream &in, Edge &e) {
        in >> e.u >> e.v >> e.w;
        return in;
    }

    void inv(){
        w *= -1;
    }
};

template < typename T = int > bool bellman_ford(int n, vector < Edge < T > > &edges){
    vector < T > dist(n + 5, INF);
    T zero = 0;

    for(int i = 0; i < n; i++)
        for(auto& [u, v, w] : edges)
            dist[v] = min(dist[v], min(dist[u], zero) + w);

    for(auto& [u, v, w] : edges)
        if(dist[v] > min(dist[u], zero) + w)
            return false;

    return true;
}

void Solve(){
    int n, m;
    cin >> n >> m;
    vector < Edge < int > > edges(m);
    cin >> edges;
    cout << (!bellman_ford(n, edges) ? "possible\n" : "not possible\n");
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
        // cout << "Case #" << tc << ": ";
        Solve();
    }
    return 0;
}
