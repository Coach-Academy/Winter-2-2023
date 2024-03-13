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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,m,k;cin>>n>>m>>k;
    vector<vector<ll>>op(m+1,vector<ll>(3));
    vector<ll>v(n);
    rep(n)cin>>v[i];
    vector<ll>partial(n+9);
    rep(m)cin>>op[i+1][0]>>op[i+1][1]>>op[i+1][2];
    vector<int>res(m+9);
    rep(k){
        int l,r;cin>>l>>r;
        res[l]++;
        res[r+1]--;
    }
    for(int i =1;i<=m;i++)res[i]+=res[i-1];
    for(int i=1;i<=m;i++){
        partial[op[i][0]] += res[i]* op[i][2];
        partial[op[i][1]+1] -= res[i]* op[i][2];
    }
    for(int i = 1;i<=n;i++)partial[i]+=partial[i-1];
    rep(n){
        cout<<v[i] + partial[i+1]<<" ";
    }





}
//   [[],[1,2,1],[],[]]
