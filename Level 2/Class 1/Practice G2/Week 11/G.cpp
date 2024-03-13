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
    string a,b;
    cin>>a>>b;
    vector<int> freq_a(27),freq_b(27);
    rep(n){
        freq_a[a[i]-'a']++;
        freq_b[b[i]-'a']++;
    }
    for(char c = 'a';c<='z';c++){
        if(freq_a[c-'a']<freq_b[c-'a']){
            cout<<"NO"<<endl;return ;
        }
        while((freq_a[c-'a']-freq_b[c-'a'])>=k){
            freq_a[c-'a']-=k;
            freq_a[c-'a'+1]+=k;
        }
        if(freq_a[c-'a']!=freq_b[c-'a']){
            cout<<"No"<<endl;return;
        }
    }
    cout<<"Yes"<<endl;



}

itn main() {
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
  return 0;

}
