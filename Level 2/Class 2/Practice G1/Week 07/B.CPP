#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e5+7;
int a[N] ,b[N];
int n,k;
bool ok( ll x)
{
    ll ans =0;
    for (int i = 0; i < n; ++i) {
        ll need = a[i] * x;
        if ( need > b[i])
            ans += ( need  - b[i]);
        if ( ans > k)
            return 0;
    }
    return 1;
}
void doWork()
{
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin  >> b[i];
    }

    ll s= 0,e =2e9,best =0;
    while (s <= e)
    {
        ll mid = (s+e)/2;
        if ( ok(mid))
            best = mid , s = mid+1;
        else
            e =mid-1;
    }
    cout << best << endl;
    
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        doWork();
    }

    return 0;
}