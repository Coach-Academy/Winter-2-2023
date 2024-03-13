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
    int n,k;cin>>n>>k;
    vector<int>v(n+1);
    for(int i =1;i<=n;cin>>v[i],i++);
    ll count  = 0,mn = INT_MAX,idx = 1;
    for(int i =1;i<=k;i++){
        count+=v[i];
    }
    mn = count;
    for(int i =1;i<=(n-k);i++){
        if(mn>count + v[i+k] - v[i]){
            idx = i+1;
            mn = count + v[i+k] - v[i];
        }
        count +=v[i+k] - v[i];
    }
    cout<<idx<<endl;



}
