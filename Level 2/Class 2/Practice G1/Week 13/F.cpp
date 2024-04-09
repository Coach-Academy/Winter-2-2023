#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
     int t;
     cin >> t ;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int mx = *max_element(a,a+n);
        int idx = -1;
        for (int i = 0; i < n; ++i) {
            if ( a[i] != mx)
                continue;
            if (i && a[i-1] < a[i])
                idx = i+1;
            if (i+1 < n && a[i+1] < a[i])
                idx = i+1;
        }
        cout << idx<< endl;
        
    }
    return 0;
}