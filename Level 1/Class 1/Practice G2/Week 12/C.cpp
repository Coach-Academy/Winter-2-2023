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
int magic(string s){
    if(s.size()==1)return stoi(s);
    int sum = 0;
    for(auto a : s)sum+=(a-'0');
    return magic(to_string(sum));
}

void solve() {
    string s;cin>>s;
    int k;cin>>k;
    itn ans = magic(s);
    ans*=k;
    ans = magic(to_string(ans));
    cout<<ans;

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
