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
       int n,k;cin>>n>>k;
       pair<int,int>arr[50];
       rep(n){
           cin>>arr[i].first>>arr[i].second;
           arr[i].first*=-1;
       }
       sort(arr,arr+n);
       cout<<count(arr,arr+n,arr[k-1]);
       
    }


}
