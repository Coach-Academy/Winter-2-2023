#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "cmath"
#include "iomanip"
#include "unordered_map"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long

#define vi vector<int>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>v(n),ans(n);
    rep(n)cin>>v[i];
    for(int bit = 0;bit<20;bit++){
        int cnt=0;
        for(auto a : v){
            if(a&(1<<bit))cnt++;
        }
        for(int i =0;i<n&&cnt;i++){
            ans[n-i-1] = (ans[n-i-1]|(1<<bit));
            cnt--;
        }
    }


    ll res = 0;
    for(auto a :ans)res+=a*1LL*a;
    cout<<res<<endl;

}

itn main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

//   int t;cin>>t;
//   while(t--){
//       solve();
//    }
  solve();
  return 0;

}
