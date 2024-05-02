#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort( a , a+n , greater<int>());
    int cnt = 0 , ans = 0 ;
    for (int i = 0; i < n; ++i) {
        cnt++;
        if ( 1ll * cnt * a[i]  >= x)
            cnt =0 , ans++;
    }

    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
        doWork();
    return 0;
}