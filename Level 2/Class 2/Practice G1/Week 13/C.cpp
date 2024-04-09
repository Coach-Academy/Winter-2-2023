#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+1;
int freq[N];

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0, x; i < n; ++i) {
            cin >> x;
            freq[x % m]++;
        }
        int cnt = 0;
        for (int i = 0; i < m; ++i) {
            int x = i;
            int y = m-i;
            if ( x == 0)
            {
                cnt += (freq[i]>=1);
                freq[i] = 0;
            }
            else
            {
                 int mn = min(freq[x] , freq[y]);
                 if ( mn  > 0)
                 {
                    cnt++;
                    freq[x] -= mn;

                    if ( x != y)
                    freq[y] -= mn;

                    if ( freq[x] > 0)
                        freq[x]--;
                    else if ( freq[y] > 0)
                        freq[y]--;
                 }
                 cnt += ( freq[x] + freq[y]);
                 freq[x] = freq[y] = 0;
            }
        }
        cout << cnt << endl;

    }
    return 0;
}