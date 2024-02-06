#include <iostream>
#include <bits/stdc++.h>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "unordered_map"
#include "cstring"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;cin>>n>>k;
    vector<int>v(n);
    rep(n)cin>>v[i];
    ll ans = 0;
    sort(v.rbegin(),v.rend());
    for(int i =  0;i<n;i++){
        int a = i/k+1;
        ans+= a*v[i];
    }
    cout<<ans<<endl;

}
