#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+7;
void doWork()
{
    int n ,k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll sum =a[0]  , ans =0;
    for (int i = 1; i < n; ++i) {
        ll can = sum * k /100;
        if ( a[i] > can)
        {
            ans += (((a[i] *100 + k-1) / k) - sum);
             sum = (a[i] *100 + k-1) / k;
        }
        sum += a[i];
    }
    cout <<  ans << endl;
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