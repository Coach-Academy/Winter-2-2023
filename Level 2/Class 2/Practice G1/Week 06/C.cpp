#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
   int n;
   cin >> n;
   int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a,a+n);
      ll ans =0;
    for (int i = 0; i < n; ++i) {
        int ex = i+1;
        ans += abs(ex - a[i]);
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}