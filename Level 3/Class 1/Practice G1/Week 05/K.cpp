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
    }

    Floyd(int _n, const vector < vector < T > > &D) : n(_n), dist(D) { }

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
                    update_dist(u, v, i);
    }

    T get_dist(int u, int v){
        return dist[u][v];
    }

    void update_dist(int u, int v, int a, int b){
        dist[u][v] = operation(dist[u][v], dist[u][a] + dist[a][b] + dist[b][v]);
    }

    void update_dist(int u, int v, int k){
        dist[u][v] = operation(dist[u][v], dist[u][k] + dist[k][v]);
    }
};

void Solve(){
    int n;
    cin >> n;

    vector < vector < ll > > dist(n + 1, vector < ll > (n + 1));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> dist[i][j];

    Floyd < ll, 1 > floyd(n);

    vector < int > to_remove(n);
    cin >> to_remove;

    vector < ll > ans(n);

    for(int idx = n - 1; idx >= 0; idx--){
        int k = to_remove[idx]; // node to remove

        // add edges
        for(int u = 1; u <= n; u++){
            floyd.add_edge(u, k, dist[u][k]);
            floyd.add_edge(k, u, dist[k][u]);
        }
        
        // update distances
        for(int u = 1; u <= n; u++)
            for(int v = 1; v <= n; v++)
                floyd.update_dist(u, v, k);
    
        // get answer
        for(int i = idx; i < n; i++)
            for(int j = idx; j < n; j++)
                ans[idx] += floyd.get_dist(to_remove[i], to_remove[j]);
    }

    cout << ans << "\n";
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
