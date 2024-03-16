#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int solve( int n)
{
    if ( n == 0)
        return 0;

    int x;
    cin >> x;
    return  x+ solve(n-1);
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        cout << "Case "<<i<<": ";
        cout << solve(n) << endl;
    }
    return 0;
}