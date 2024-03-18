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
int magic(vector<int>v,int idx =0){
    if(v.size()==idx)return 0;
    return v[idx] + magic(v,idx+1);
}

void solve() {
int t;cin>>t;
for(int i =1;i<=t;i++){

    int n;cin>>n;
    vector<int>v(n);
    for(auto &a : v)cin>>a;
    cout<<"Case "<<i<<": "<<magic(v)<<endl;
}


}

itn main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

//   int t;cin>>t;
//   while(t--){
//       solve();
//    }
  solve();
  return 0;

}
// 123123123 => 18 => 9
// 6 * 3 = 18 => 9
