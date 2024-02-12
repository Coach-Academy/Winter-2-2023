#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+7;
ll a[100];
int n ,k;
bool ok( ll mid)
{
    ll sum =a[0]+ mid , ans =0;
    for (int i = 1; i < n; ++i) {
        ll can = sum * k /100;
        if ( a[i] > can)
        {
            return 0;
        }
        sum += a[i];
    }
    return 1;
}
void doWork()
{
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll s = 0 , e = 1e12,best = 1e18;
    while (s <= e)
    {
        ll mid= (s+e)/2;
        if ( ok(mid))
            e = mid-1, best = mid;
        else
            s = mid+1;
    }
    cout <<  best << endl;
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