#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int dx[] = {-2, 2, -2, 2, -1, 1, -1, 1};
int dy[] = {-1, 1, 1, -1, -2, 2, 2, -2};
int dist[10][10];
bool valid(int i , int j)
{
    return (i>0 && i<=8 && j>0 && j<=8);
}
int bfs(int x1, int y1, int x2, int y2) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            dist[i][j] = 10000;
        }
    }
    queue<pair<int, int>> q;
    q.push({x1, y1});
    dist[x1][y1] = 0;
    while (!q.empty()) {
        int i = q.front().first, j = q.front().second;
        q.pop();

        for (int k = 0; k < 8; ++k) {
            int ii = i+dx[k] , jj = j+dy[k];

            if (valid(ii,jj) && (dist[ii][jj] > dist[i][j]+1))
            {
                dist[ii][jj] = dist[i][j]+1;
                q.push({ii,jj});
            }
        }
    }
    return dist[x2][y2];

}

int main() {
    string x , y;
    while ( cin >> x>> y)
    {
        int x1,y1,x2,y2;
        x1 = x[0]-'a'+1;
        x2 = y[0]-'a'+1;
        y1 = x[1] - '0';
        y2 = y[1] - '0';
        int ans  = bfs(x1,y1,x2,y2);
        cout << "To get from " << x << " to " << y << " takes " << ans << " knight moves.\n";
    }

    return 0;
}