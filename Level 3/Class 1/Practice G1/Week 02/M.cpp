#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+7;
int n,m;
vector<int> adj[N],vis(N);
 void bfs(int node)
{
    queue<pair<int,int>> q;
    vis[node] = 1;
    q.push({node, 0});
    while (!q.empty())
    {

        node = q.front().first;
        int color1 = q.front().second;
        int color2 = vis[node];
        q.pop();
        int mex = 1;
        for(auto &i : adj[node])
        {
            if ( vis[i])
                continue;

            while (mex == color1 || mex == color2)
                mex++;

            vis[i] = mex;
            mex++;
            q.push({i,color2});
        }
    }

}
void doWork() {
   cin >> n;
    for (int i = 0; i < n-1; ++i) {
        int u,v;
        cin >> u >>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    cout << *max_element(vis.begin()+1, vis.begin()+n+1) << endl;
    for (int i = 1; i <= n; ++i) {
        cout << vis[i] << " ";
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