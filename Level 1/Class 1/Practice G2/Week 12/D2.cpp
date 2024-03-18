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
//int magic(int n,int k){
//    if(n<=k)return 1;
//  return magic(n/2,k) + magic(n/2 + n%2,k);
//}

void solve() {
   int n,k;
   while(cin>>n>>k){

       vector<int>v;
       v.push_back(n);
       int cnt = 0;
       while(v.size()){
           int a = v.back();
           v.pop_back();
           if(a<=k)cnt++;
           else {
               v.push_back(a/2);
               v.push_back(a/2 + (a%2));
           }
       }
       cout<<cnt<<endl;
   }

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
