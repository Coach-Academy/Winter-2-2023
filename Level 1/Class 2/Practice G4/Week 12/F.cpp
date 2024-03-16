#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int n,s,d;
bool solve( int i)
{
    if ( i == n)
        return 0;

    int x,y;
    cin >> x >> y;
    if ( x < s && y > d)
        return 1;

    return solve(i+1);

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin >> n >> s >> d;
    bool ans = solve(0);
    cout << (ans ? "Yes" : "No");
    return 0;
}