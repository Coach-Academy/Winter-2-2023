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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,t;cin>>n>>t;
    vector<int>v(n);
    rep(n)cin>>v[i];

    int sum = 0,ans=0,r=0;
    for(int l = 0;l<n;){
        while(r<n&&sum+v[r]<=t){
            sum+=v[r];r++;
        }
        ans = max(ans,r-l);
        sum-=v[l];
        l++;
    }
    cout<<ans<<endl;
}

