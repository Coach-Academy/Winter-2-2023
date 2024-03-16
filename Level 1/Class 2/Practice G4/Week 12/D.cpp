#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int sz;
int solve( int n)
{
    // base case
    if ( n <= sz)
        return 1;

    int a = (n/2);
    int b = n - n/2;
    return solve(a) + solve(b);

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    while (cin >> n >> sz)
    {
        cout  << solve(n) << endl;
    }

    return 0;
}