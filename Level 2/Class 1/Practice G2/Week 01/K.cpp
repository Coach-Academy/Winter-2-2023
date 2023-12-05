#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
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
 int tc;cin>>tc;
 while(tc--){
     int n;cin>>n;
     int prev = 0;
     vector<int>v(n),pos;
     for(int i =0;i<n;i++){
         cin>>v[i];
         if(v[i]>prev) {
             pos.push_back(i);
             prev = v[i];
         }
     }
     
     int limit = n;
     while(pos.size()){
         for(itn i =pos.back();i<limit;i++){
             cout<<v[i]<<" ";
         }
         limit = pos.back();
         pos.pop_back();
     }
     cout<<endl;

 }


}
