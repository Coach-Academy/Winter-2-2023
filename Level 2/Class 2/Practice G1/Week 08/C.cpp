#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
vector<ll> lucky;
void pre(ll num )
{
    if ( num > 1e10)
        return;

    lucky.push_back(num);

    pre(num*10+4);

    pre(num*10+7);
}
ll solve( ll l , ll r)
{
    // base case
    if ( l > r)
        return 0;
    // transition
    ll next = *lower_bound(lucky.begin(),  lucky.end() , l);
    ll nums = min((next - l  + 1),1ll*(r-l+1));

    ll ans = solve(next+1 , r);
    return ans + (next * nums);

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int l , r;
    cin >> l >> r;
    pre(0);
    sort(lucky.begin(),  lucky.end());
    cout << solve(l,r) << endl;
    return 0;
}