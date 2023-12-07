#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5 + 7;
int n, m;
char a[550][550];
int vis[550][550];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool valid(int i , int j )
{
    return (i>=0 && j>=0 && i<n && j <m);
}
vector<pair<int,int>> bfs(int i , int j)
{
    vector<pair<int,int>> ret;
    queue<pair<int,int>> q;
    q.push({i,j});
    vis[i][j] = 1;
    while (!q.empty())
    {
        //cout << q.front().first << " " << q.front().second << endl;
        ret.push_back(q.front());

        tie(i,j) = q.front();
        q.pop();

        for (int k = 0; k < 4; ++k) {
            int ii  = i+dx[k];
            int jj = j+dy[k];
            if (valid(ii,jj) && !vis[ii][jj] && a[ii][jj]!='#')
            {
                vis[ii][jj] = 1;
                q.push({ii,jj});
            }
        }
    }
    return ret;
}
void doWork() {
    int k;
    cin >> n >> m >> k;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    vector<pair<int,int>> v;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ( a[i][j] == '.')
            {
                v = bfs(i,j);
                break;
            }
        }
        if ( v.size())
            break;
    }
    // print solution
    while (k--)
    {
        int i,j;
        tie(i,j) = v.back();
        v.pop_back();
        a[i][j] = 'X';
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j];
        }
        cout << endl;
    }

}

int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        doWork();
    }
    return 0;
}