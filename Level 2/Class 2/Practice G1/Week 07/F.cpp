#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e5+7;
int n,k;
int a[N];
bool can( ll x)
{
    int cnt = 0 , lst = -1;
    for (int i = 0; i < n; ++i) {
        if ( a[i] > lst)
        {
            cnt++;
            lst = a[i] + x - 1;
        }
    }
    if (cnt > k)
        return 0;
    else
        return 1;
}
void doWork()
{
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll st = 1, end = 1e9, best = 1e9;
    while (st <= end)
    {
        ll mid = (st+end)/2;
        if ( can(mid))
            end = mid-1 , best = mid;
        else
            st = mid+1;
    }
    cout << best << endl;
    
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
     cin >> t;
    while (t--)
    {
        doWork();
    }

    return 0;
}