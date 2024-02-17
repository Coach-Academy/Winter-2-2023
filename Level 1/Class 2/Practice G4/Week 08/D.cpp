#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
    int n;
    cin >> n;
    vector<int> v(n);
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int mn = 2e9;
    for (int i = 1; i < n; ++i) {
        if ( s[i] =='L' && s[i-1]=='R')
        {
            mn = min(mn , (v[i] -v[i-1])/2);
        }
    }
    if ( mn == 2e9)
        mn = -1;
    cout << mn  << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
        doWork();
    return 0;
}