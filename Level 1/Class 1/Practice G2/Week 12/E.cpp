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
int magic(vector<int>&a ,vector<int>&b,int idx =0){
    if(idx==a.size())return 0;
    return a[idx]*b[idx] + magic(a,b,idx+1);

}

void solve() {
    int n;cin>>n;
    vector<int>A(n),B(n);
    for(auto &a:A)cin>>a;
    for(auto &a:B)cin>>a;
    if(magic(A,B)==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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
// 123123123 => 18 => 9
// 6 * 3 = 18 => 9
