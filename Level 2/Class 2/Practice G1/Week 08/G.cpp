#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int a[9];
int b[9];
bool check(int idx)
{
    for (int i = 1; i < idx; ++i) {
        if (b[i] == b[idx])
            return 0;
        int cols = abs(idx-i);
        int rows = abs(b[i] - b[idx]);
        if ( cols == rows)
            return 0;
    }
    return 1;
}
int solve(int idx)
{
    // base case
    if ( idx == 9)
        return 0;
    // transition
    int ans = 10;
    for (int i = 1; i <= 8; ++i) {
        // do
        b[idx] = i;

        // recurse
        if ( check(idx))
            ans = min(ans , solve(idx+1) + (a[idx] != b[idx]));

        //undo
        b[idx] = 0;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    while (cin >> a[1])
    {
        for (int i = 2; i <= 8; ++i) {
            cin >> a[i];
        }
        cout << "Case " << t++ << ": ";
        cout << solve(1) << endl;
    }
    return 0;
}