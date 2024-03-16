#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int n;
vector<int> a, x , p ;
int solve( int  idx)
{
    int ans = 2e9;
    if ( idx == n)
        return  ans;


    if ( x[idx] > a[idx])
        ans = p[idx];

    ans = min( ans , solve(idx+1));

    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin  >> n ;
    a =  vector<int> (n);
    x =  vector<int> (n);
    p =  vector<int> (n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> p[i] >> x[i];
    }
    int ans  = solve(0);
    cout  << (ans == 2e9 ? -1 : ans) << endl;
    return 0;
}