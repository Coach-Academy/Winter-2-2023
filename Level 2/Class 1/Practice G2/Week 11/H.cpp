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
    int n;
    while(true){
        cin>>n;
        if(n==0)return;
        queue<int>q;
        rep(n){
            q.push(i+1);
        }
        cout<<"Discarded cards:";
        while(q.size()>1){
            cout<<" "<<q.front();
            q.pop();
            if(q.size()>1){
                cout<<",";
                q.push(q.front());
                q.pop();
            }
        }
        cout<<endl<<"Remaining card: "<<q.front()<<endl;
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
