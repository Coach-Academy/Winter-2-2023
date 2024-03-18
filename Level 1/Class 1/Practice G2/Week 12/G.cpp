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

bool magic( string &s,int idx =0,bool is_upper =false ){
    if(idx==s.size())return 1;
    return (s[idx]>='a'&&is_upper==false||s[idx]<='Z'&&is_upper)&& 
    magic(s,idx+1,!is_upper);
}

void solve() {
  string s;cin>>s;
  if(magic(s))cout<<"Yes"<<endl;
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
