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
    int t=1;
//    int t;cin>>t;
    while(t--){
        int n;cin>>n;
     string s;cin>>s;
     string a = s.substr(0,n),b= s.substr(n);
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     int l =1 ,r = 1;
     for(int i =0;i<n;i++){
         l&=(a[i]<b[i]);
         r&=(b[i]<a[i]);
     }
     if(l||r)cout<<"YES";
     else cout<<"NO";
    }


}
