#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "unordered_map"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long
using namespace std;
vector<ll>lucky;
void generator(ll num){
    if(num>1e10)return;//base case
    lucky.push_back(num);
    generator(num*10+4);
    generator(num*10+7);

}
ll solve(ll l,ll r){
    if(l>r)return 0;//base case
    ll next = *lower_bound(lucky.begin(),lucky.end(),l);
    ll nums = min(next-l+1,r-l+1);
    ll ans = solve(next+1,r);
    return ans+ (next*nums);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll l,r;
    cin>>l>>r;
    generator(0);
    sort(lucky.begin(),lucky.end());
    cout<<solve(l,r);



}
