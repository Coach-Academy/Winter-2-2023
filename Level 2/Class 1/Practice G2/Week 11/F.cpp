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
    vi v(n);
    rep(n)cin>>v[i];
    sort(v.begin(),v.end());
    int cnt{0};
    int temp =1;
    int l= 0,r=1;
    while(r<n){
        if(v[r]-v[l]>5){
            cnt = max(cnt,temp);
            temp--;
            l++;
        }
        else {
            temp++,r++;
        }
    }

    cout<<max(cnt,temp);

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
