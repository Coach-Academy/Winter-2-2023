#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
   int n;
   cin >> n;
   int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a,a+n);
    if ( a[0] == 1)
    {
        cout << -1 << endl;
    }
    else
        cout << 1 << endl;  
    return 0;
}