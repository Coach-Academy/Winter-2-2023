//https://vjudge.net/contest/608080#problem/I
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

   // b[i] = 1   c = 12112
   while(t--){
       int n;cin>>n;
       string a ="",b;cin>>b;
       int prev =0;
       rep(n){
           if(b[i]=='1'&&prev==2){
               cout<<0;
               prev=1;
           }
           else if(b[i]=='1'&&prev!=2){
               cout<<1;
               prev = 2;
           }
           else if(b[i]=='0'&& prev!=1){
               cout<<1;prev= 1;
           }
           else {
               cout<<0;prev=0;
           }
       }
       cout<<endl;
   }
}
