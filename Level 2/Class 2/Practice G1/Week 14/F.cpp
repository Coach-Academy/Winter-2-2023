#include<bits/stdc++.h>

#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    vector<int> vis(1e5+1);
    int n , s, t;
    cin >> n >> s >> t;
    int p[n+1];
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }
    int cnt =0 ;
    while (true)
    {
        if ( s  == t)
            break;
        if ( vis[s] == 1)
        {
            cnt = -1;
            break;
        }
        vis[s] = 1;
        s = p[s];
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}