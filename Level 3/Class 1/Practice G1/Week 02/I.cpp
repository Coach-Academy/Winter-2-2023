#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e3+7;
int n,m;
vector<int> adj[N];
 vector<int> bfs(int node)
{
    queue<int> q;
    vector<int> dist(n+1);
    q.push(node);
    for (int i = 0; i <= n ; ++i) {
        dist[i] = 1e7;
    }
    dist[node] = 0;
    while (!q.empty())
    {
        node = q.front();
        q.pop();
        for(auto &i : adj[node])
        {
            if ( dist[i] > dist[node]+1)
            {
                dist[i] = dist[node]+1;
                q.push(i);
            }
        }
    }
    return dist;
}
void doWork()
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s;
    cin >> s;
    vector<int> ans = bfs(s);
    for (int i = 1; i <= n; ++i) {
        adj[i].clear();
        if ( i == s)
            continue;
        if ( ans[i]  >= 1e7)
            cout << -1<< " ";
        else
            cout << ans[i]*6 << " ";


    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}