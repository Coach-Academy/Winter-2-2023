#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "unordered_map"
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
  int n;
  cin>>n;
  vector<int>v(n+7);
  vector<ll>pre1(n+9),pre2(n+9);
  for(int i =1;i<=n;i++){
      cin>>v[i];
      pre1[i] = pre1[i-1]+v[i];
  }
  sort(v.begin()+1,v.begin()+n+1);
    for(int i =1;i<=n;i++){
        pre2[i] = pre2[i-1]+v[i];
    }
  int q;cin>>q;
  while(q--){
      int op,l,r;
      cin>>op>>l>>r;
      if(op==1)
          cout<<pre1[r]-pre1[l-1]<<endl;
      else cout<<pre2[r] - pre2[l-1]<<endl;
  }

}
