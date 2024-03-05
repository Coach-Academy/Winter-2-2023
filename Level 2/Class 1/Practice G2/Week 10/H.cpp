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

void solve(){
    int n,k;cin>>n>>k;
    vi v;
    for(int i =2;i*i<=n;i++){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
        if(v.size()==k)break;
    }
    if(n!=1)v.push_back(n);
    while(v.size()>k){
        int temp = v.back()*v[v.size()-2];
        v.pop_back();
        v.pop_back();
        v.push_back(temp);
    }
    if(v.size()<k)cout<<-1;
    else for(auto a :v)cout<<a<<" ";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


//    int t;cin>>t;
//    while(t--){
//        int a,b,n;cin>>a>>b>>n;
//        cout<<pre[n][b] - pre[n][a-1]<<endl;
//    }
    solve();




}
