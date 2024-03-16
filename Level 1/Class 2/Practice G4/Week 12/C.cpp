#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
ll solve( ll n )
{
    if (n  < 10)
        return n;

    int num =0;
    while (n)
    {
        num += (n%10);
        n/=10;
    }
    return solve( num);
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string s ;
    int k;
    cin  >> s >> k;
    ll num =0;
    for (int i = 0; i < s.size(); ++i) {
        num += (s[i] - '0');
    }
    num *= k;
    cout << solve(num);
    return 0;
}