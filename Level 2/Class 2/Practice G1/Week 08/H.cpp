#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int p[32] ,n,vis[20];
vector<int> path = {1};
void solve()
{
    if ( path.size() == n)
    {
        if( p[path.front()+path.back()])
        {
            for (int i = 0; i < n-1; ++i) {
                cout << path[i] << " ";
            }
            cout <<path[n-1];
            cout << endl;
        }
        return;
    }
    for (int i = 2; i <= n; ++i) {
        if ( vis[i])
            continue;
        vis[i] = 1;
        path.push_back(i);
        if ( p[path.back()+path[path.size()-2]])
                solve();

        vis[i] = 0;
        path.pop_back();
    }
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    p[2] = p[3] = p[5] = p[7] = p[11] = p[13] = p[17] = p[19] = 1;
    p[23] = p[29] = p[31] = 1;
    int t = 1;
    while (cin >> n)
    {
        if (t > 1)
        cout << endl;
        cout <<"Case " << t++ << ":\n";
        solve();
    }
    return 0;
}