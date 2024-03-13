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

bool can(ll mid,ll k,vector<ll>&v,ll n){
    int last = v[0];
    int cnt = 1;
    for(int i =1;i<n;i++){
        if(v[i] - last + 1>mid){
            cnt++;
            last  = v[i];
        }
    }

    return cnt<=k;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<ll>v(n);
        rep(n)cin>>v[i];
        sort(v.begin(),v.end());
        ll l =0,r = 1e9;
        while(l<=r){
            ll mid = l + (r-l)/2;
            if(can(mid,k,v,n)){
                r = mid-1;
            }
            else l = mid+1;
        }
        cout<<r+1<<endl;
    }


}

