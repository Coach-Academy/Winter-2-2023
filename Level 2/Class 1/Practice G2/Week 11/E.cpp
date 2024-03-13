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

    ll n,sum =0; cin>>n;
    rep(n){
        int a;cin>>a;
        sum+=a;
    }
    int r = sum%n;
    cout<<r*(n-r)<<endl;



}

itn main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

   int t;cin>>t;
   while(t--){
       solve();
    }
//  solve();
  return 0;

}
