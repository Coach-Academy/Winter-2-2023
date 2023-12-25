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

template < typename T = int , int Base = 0 > struct Floyd {
    
    int n;
    vector < vector < T > > dist;

    Floyd(int _n = 0) : n(_n){
        dist.assign(n + Base, vector < T > (n + Base, INF));
        for(int i = Base; i < n + Base; i++)
            dist[i][i] = 0; // self loops
    }

    Floyd(int _n, const vector < vector < T > > &D) : n(_n), dist(D) { build(); }

    T operation(T a, T b){
        return min(a, b);
    }

    void add_edge(int u, int v, T w){
        dist[u][v] = operation(dist[u][v], w);
    }

    void build(){
        for(int i = Base; i < n + Base; i++)
            for(int u = Base; u < n + Base; u++)
                for(int v = Base; v < n + Base; v++)
                    dist[u][v] = operation(dist[u][v], dist[u][i] + dist[i][v]);
    }

    T get_dist(int u, int v){
        return dist[u][v];
    }
};

void Solve(){
    int n;
    cin >> n;
    vector < vector < ll > > dist(n + 1, vector < ll > (n + 1));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> dist[i][j];
    Floyd < ll, 1 > floyd(n, dist);
    int q;
    cin >> q;
    ll total_distance = 0;
    while(q--){
        int u, v;
        cin >> u >> v;
        total_distance += floyd.get_dist(u, v);
    }
    cout << total_distance << '\n';
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
        cout << "Case #" << tc << ": ";
        Solve();
    }
    return 0;
}
