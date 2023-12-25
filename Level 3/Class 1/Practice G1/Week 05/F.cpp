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
        dist.assign(n + Base, vector < T > (n + Base, 0));
        for(int i = Base; i < n + Base; i++)
            dist[i][i] = 1; // self loop
    }

    Floyd(int _n, const vector < vector < T > > &D) : n(_n), dist(D) { build(); }

    T operation(T a, T b){
        return max(a, b);
    }

    void add_edge(int u, int v, T w){
        dist[u][v] = operation(dist[u][v], w);
    }

    void build(){
        for(int i = Base; i < n + Base; i++)
            for(int u = Base; u < n + Base; u++)
                for(int v = Base; v < n + Base; v++)
                    dist[u][v] = operation(dist[u][v], dist[u][i] * dist[i][v]);
    }

    T get_dist(int u, int v){
        return dist[u][v];
    }
};

int n;

void Solve(){
    map < string, int > id;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        id[s] = i;
    }
    Floyd < double > floyd(n);
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        string u, v;
        double w;
        cin >> u >> w >> v;
        floyd.add_edge(id[u], id[v], w);
    }

    floyd.build(); // build the graph

    for(int i = 0; i < n; i++){
        if(floyd.get_dist(i, i) > 1.0)
            return cout << "Yes\n", void();
    }
    
    cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 0;
    while(cin >> n && n){
        cout << "Case " << ++test_cases << ": ";
        Solve();
    }
    return 0;
}
