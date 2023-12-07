#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e3+7;
int n,m;
vector<pair<int,int>> adj[N];
 pair<int,int>bfs(int node)
{
    queue<int> q;
    q.push(node);
    int mx = 1e7;
    while (!q.empty())
    {
        node = q.front();
        q.pop();
        for(auto &i : adj[node])
        {
                q.push(i.first);
                mx = min(mx ,i.second);
        }
    }
    return {node, mx};
}
int in[N], out[N];
void doWork() {
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u,v,d;
        cin >> u >> v >> d;
        adj[u].push_back({v,d});
        out[u]++;
        in[v]++;
    }
    vector<pair<int,pair<int,int>>> ans;
    for (int i = 1; i <= n; ++i) {
        if ( (in[i] == 0) && out[i])
        {
            pair<int,int>p = bfs(i);
            ans.push_back({i,p});
        }
    }
    cout << ans.size() << endl;
    for ( auto &it : ans)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }

}
int main() {
    int t =1;
    //cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}