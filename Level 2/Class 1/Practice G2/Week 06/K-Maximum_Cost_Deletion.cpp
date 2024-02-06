//https://vjudge.net/contest/608080#problem/K
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
    int t;cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;cin>>s;
        if(b>=0){
            cout<<n*(a+b)<<endl;
            continue;
        }
        // 00111111111001111111000
        char temp = '3';
        int cnt =0;
        for(auto c:s){
            if(c!=temp)cnt++;
            temp = c;
        }
        cout<<(a*n) + b *(1+cnt/2)<<endl;
    }

    



}
