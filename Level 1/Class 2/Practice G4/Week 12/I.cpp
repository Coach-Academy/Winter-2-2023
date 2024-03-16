#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int n,x;
vector<int> v;
void solve(int idx)
{
    if ( idx == n)
        return;

    if ( v[idx] != x)
        cout  << v[idx] << " ";

    solve(idx+1);
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin  >> n >> x;
    v = vector<int> (n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    solve(0);
    return 0;
}