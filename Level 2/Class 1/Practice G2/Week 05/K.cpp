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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        int arr[n];
        rep(n)cin>>arr[i];

        sort(arr,arr+n);
        int ans = INT_MAX;
        for(int i=1;i<n;i++){
            ans = min(ans,arr[i]-arr[i-1]);
        }
        cout<<ans<<endl;
    }


}
