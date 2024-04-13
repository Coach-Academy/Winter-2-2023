#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    int a[n][m], b[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            b[i][j] = 0;
        }
    }
    vector<pair<int,int>> ans;
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < m-1; ++j) {
            int cnt = a[i][j] + a[i][j+1] +a[i+1][j] + a[i+1][j+1];
            if (cnt == 4)
            {
                ans.push_back({i+1,j+1});
                b[i][j] = b[i+1][j] = b[i][j+1] = b[i+1][j+1] = 1;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ( a[i][j] !=b[i][j])
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}