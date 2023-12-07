#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e5+7;
int n,m;
vector<int> adj[N];
pair<int,int> bfs(int node)
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
    return {node, dist[node]};
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    pair<int,int>  p = bfs(1);
    pair<int,int> ans = bfs(p.first);
    cout << ans.second << endl;
    return 0;
}