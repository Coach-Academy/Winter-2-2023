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

int solve(int n,int m){
    if(n==m)return 0;
    if(n>m)return 1e9;
    return 1+min(solve(n*2,m),solve(n*3,m));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,m;
    cin>>n>>m;
    int ans = solve(n,m);
    if(ans>=1e9)cout<<-1;
    else cout<<ans;


}
