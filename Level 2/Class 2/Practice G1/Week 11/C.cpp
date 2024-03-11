#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
    int n;
    cin >> n;
    int idx = 0;
    int a[n][5];
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < 5; ++j) {
            cin >> a[i][j];
            if ( a[i][j] < a[idx][j])
                cnt++;
        }
        if ( cnt >= 3)
            idx = i;
    }

    for (int i = 0; i < n; ++i) {
        if ( i == idx)
            continue;
        int cnt = 0;
        for (int j = 0; j < 5; ++j) {
            if ( a[i][j] < a[idx][j])
                cnt++;
        }
        if ( cnt >= 3)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << idx+1 << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
   int t;
   cin >> t;
    while (t--)
    {
         doWork();
    }

    return 0;
}