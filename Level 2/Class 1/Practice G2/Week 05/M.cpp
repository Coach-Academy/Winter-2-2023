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
int tc;cin>>tc;
while(tc--){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    rep(n)cin>>v[i];
    int sum=0,cnt =0;
    vector<int>res;
    for(int i =0;i<n;i++){
        sum+=v[i];
        if(sum&1){
            if(k==cnt+1)continue;
            cnt++;
            res.push_back(i+1);
            sum=0;
        }
    }
    if(sum&1)res.push_back(n);
    if(k==res.size()){
        cout<<"YES"<<endl;
        rep(k)cout<<res[i]<<" \n"[i==k-1];
    }
    else cout<<"NO"<<endl;
}


}
