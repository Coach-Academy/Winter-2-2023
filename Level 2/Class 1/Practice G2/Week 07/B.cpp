#include <iostream>
#include <bits/stdc++.h>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "unordered_map"
#include "cstring"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long
using namespace std;
ll n,k;
vector<int>a(100001),b(100001);
bool can(ll num){
        ll temp = k;
        rep(n){
            ll c = a[i]*num - b[i];
            if(c>0)temp-=c;
            if(temp<0)return false;
        }
        return true;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin>>n>>k;
    rep(n)cin>>a[i];
    rep(n)cin>>b[i];
    unsigned ll l =0,r =2e9,ans = 0;
    while(r>=l){
        unsigned ll mid  = l + (r-l)/2;
        if(can(mid)){
            l = mid+1;
            ans = max(ans,mid);
        }
        else {
            r = mid-1;
        }
    }
    cout<<ans<<endl;

}

