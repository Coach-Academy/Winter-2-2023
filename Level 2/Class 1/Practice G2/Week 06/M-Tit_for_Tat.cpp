//https://vjudge.net/contest/608080#problem/M
#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#define endl "\n"
#define itn int
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(auto &a: v)cin>>a;
    int idx = 0;
    while(k>0&&idx<n-1){
        if(v[idx])v[idx]--,k--,v[n-1]++;
        else idx++;
    }
    for(auto a : v)cout<<a<<" ";
    cout<<endl;
}
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
        solve();
    }
//    solve();
}
