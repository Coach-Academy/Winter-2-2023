#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
    int n,a,b;
    cin >> n >> a>> b;
    string s,t="";
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if ( t.empty() || t.back()  != s[i])
            t+=s[i];
    }
    int mn = (t.size())/2 + 1;
    ll ans = a*n;
    if( b > 0)
        ans += (b*n);
    else
        ans += (b*mn);
    cout << ans << endl;
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