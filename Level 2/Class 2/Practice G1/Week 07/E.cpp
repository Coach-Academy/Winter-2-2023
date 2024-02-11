#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e5+7;
int a[3],b[3],c[3];
ll r;
bool can( ll x)
{
    ll ans =0;
    for (int i = 0; i < 3; ++i) {
        ll need = x*a[i];
        if ( need  > b[i])
        {
            ll buy = (need - b[i]) * c[i];
            ans += buy;
        }
        if ( ans > r)
            return 0;
    }
    return 1;
}
void doWork()
{
    string s;
    cin >> s;
    a[0] = std::count(s.begin(), s.end(), 'B');
    a[1] = std::count(s.begin(), s.end(), 'S');
    a[2] = std::count(s.begin(), s.end(), 'C');
    for (int i = 0; i < 3; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < 3; ++i) {
        cin >> c[i];
    }
    cin >> r;
    ll st = 0 , end = 1e13 , best =0;
    while (st <= end)
    {
        ll mid = (st+end)/2;
        if ( can(mid))
            st = mid+1 , best = mid;
        else
            end = mid-1;
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