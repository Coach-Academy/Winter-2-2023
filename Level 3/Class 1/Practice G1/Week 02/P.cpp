#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5 + 7;
int n, m;
char a[150][150];
int dist[150][150][2];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
bool valid(int i , int j )
{
    return (i>=0 && j>=0 && i<n && j <m);
}
int bfs(int i , int j)
{
    for (int k = 0; k < 100; ++k) {
        for (int l = 0; l < 100; ++l) {
            dist[k][l][0] = dist[k][l][1] = 1e9;
        }
    }
    int mx = 1e9;
    queue<pair<pair<int,int>,int>> q;
    dist[i][j][0] = 0;
    q.push({{i,j},0});
    while (!q.empty())
    {
        i = q.front().first.first;
        j = q.front().first.second;
        int door = q.front().second;
        q.pop();
        for (int k = 0; k < 4; ++k) {
            int ii  = i +dx[k], jj = j+dy[k];
            if (valid(ii,jj))
            {
                if ( a[ii][jj] == 'W')
                    continue;
                if ( a[ii][jj] == 'D' && (door == 0))
                    continue;

                int newdoor = door;
                if ( a[ii][jj] == 'O')
                    newdoor = 1;
                if ( a[ii][jj] == 'C')
                    newdoor = 0;

                if ( dist[ii][jj][newdoor] > dist[i][j][door]+1)
                {
                    dist[ii][jj][newdoor] = dist[i][j][door]+1;
                    q.push({{ii,jj},newdoor});
                }
            }
            else
            {
                mx = min( mx , dist[i][j][door]+1);
            }
        }
    }
    if ( mx == 1e9)
        mx = -1;
    return mx;
}
void doWork() {
    cin >> n >> m;
    if ( n == -1)
    {
        exit(0);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ( a[i][j] == 'H')
            {
                cout << bfs(i,j) << endl;
            }
        }
    }

}

int main() {
    int t = -1;
    //cin >> t;
    while (t--) {
        doWork();
    }
    return 0;
}