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
    while(tc--) {
        int n;
        cin >> n;
        vector<int>v(n);
        rep(n)cin>>v[i];
        int cnt =0;
        for(int i =0;i<n-1;i++){
            int a = v[i],b=v[i+1];
            while(a*2<b)a*=2,cnt++;
            while(b*2<a)b*=2,cnt++;
        }
        cout<<cnt<<endl;
    }

}
