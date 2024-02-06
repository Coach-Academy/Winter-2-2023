//https://vjudge.net/contest/608080#problem/L
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
int n,k;cin>>n>>k;
ll sum=  0;
set<pair<ll,pair<int,int>>, greater<pair<ll,pair<int,int>>>>s;
vector<ll>v(n),ans;
rep(n){
    cin>>v[i];
    sum+=v[i];
}
s.insert({sum,{0,n-1}});
while(k--){
    int l = (*s.begin()).second.first,r = (*s.begin()).second.second;
    sum = (*s.begin()).first;
    ans.push_back(sum);
    s.insert({sum - v[l],{l+1,r}});
    s.insert({sum - v[r],{l,r-1}});
    s.erase(s.begin());
}
for(auto a : ans )cout<<a<<" ";
cout<<endl;



}
