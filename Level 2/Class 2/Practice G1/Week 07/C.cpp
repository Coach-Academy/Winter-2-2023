#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e5+7;

void doWork()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a,a+n);
    int ans = n;
    for (int i = 0 , j= n/2; j < n  && i< n/2; j++) {
        if ( a[i] *2  <= a[j])
            ans--,i++;
    }
    cout << ans << endl;
    
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