#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+1;
int p[N];

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[3] = {};
        for (int i = 0,x; i < n; ++i) {
            cin >> x;
            a[x%3]++;
        }
        int cnt =0;
        for (int i = 0; i < 9; ++i) {
            int excess = a[i%3] - n/3;
            if ( excess > 0)
            {
                a[(i+1)%3] += excess;
                cnt += excess;
                a[i%3] -= excess;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}