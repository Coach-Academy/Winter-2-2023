#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int gcdsum( ll n)
{
    string s = to_string(n);
    ll num = 0;
    for (int i = 0; i < s.size(); ++i) {
        num += (s[i] - '0');
    }
    return __gcd(num ,n);
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
     int t;
     cin >> t ;
    while (t--)
    {
       ll n;
       cin >> n;
        while (gcdsum(n) == 1)
            n++;
        cout << n << endl;

    }
    return 0;
}