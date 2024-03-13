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
int arr[500007];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;cin>>n;
    rep(n)cin>>arr[i];
    sort(arr,arr+n);
    int ans = n;
    for(int i =0,j = n/2;i<n/2;i++){
        for(;j<n&&arr[i]*2>arr[j];j++);
        if(j==n)break;
        ans--;j++;
    }
    cout<<ans;

}

