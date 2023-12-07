#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+7;
int n,m;
vector<pair<int,int>> adj[N];
vector<int> vis(N);
set<int> bfs(int node)
{
    queue<pair<int,int>> q;
    vis[node] = 1;
    set<int > s;
    q.push({node, 0});
    while (!q.empty())
    {

        node = q.front().first;
        int prev = q.front().second;
        q.pop();
        for(auto &it: adj[node])
        {
            int child = it.first;
            int type = it.second;
            if ( vis[child])
                continue;

            vis[child] = 1;
            if ( type == 2)
            {
                s.erase(prev);
                s.insert(child);
                q.push({child , child});
            }
            else
            {
                q.push({child , prev});
            }
        }
    }
    return s;
}
void doWork() {
   cin >> n;
    for (int i = 0; i < n-1; ++i) {
        int u,v,t;
        cin >> u >>v >> t;
        adj[u].push_back({v,t});
        adj[v].push_back({u,t});
    }
     set<int> s = bfs(1);
    cout << s.size() << endl;
    for(auto &i : s)
        cout << i << " ";

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