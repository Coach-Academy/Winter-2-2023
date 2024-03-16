#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
string s;
string solve(string a, string b, int idx)
{
    // basecase
    if( idx == a.size() || a[idx] == '.' )
        return b;

    // transition
    b+=a[idx];
    return solve(a, b, idx+1);
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin >> s;
    cout << solve(s,"",0);
    return 0;
}