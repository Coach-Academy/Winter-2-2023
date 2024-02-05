#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        int mn = min(a[i], k);
        a[i] -= mn;
        k -= mn;
        a[n - 1] += mn;
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}