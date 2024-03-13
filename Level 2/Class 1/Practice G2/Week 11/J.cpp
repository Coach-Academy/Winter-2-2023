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
    int n,k;cin>>n>>k;
    map<int,int>mp;
    rep(n){
        int a;cin>>a;
        if(a%k){
            mp[k - a%k]++;
        }
    }
    ll ans = 0;
    if(mp.empty())cout<<0<<endl;
    else {
        for(auto a : mp){
            int r = a.first;
            ans = max(ans,r + (a.second-1LL)*k);
        }
        cout<<ans+1<<endl;
    }


}

int main() {
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

}
