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
int n;
vector<int>v;
vector<double>temp;
bool can(double num){
    double last = 0;
    int cnt = 0;
    temp = vector<double>(3,1e9);
    for(int i=0;i<n;i++){
       if(last<v[i]){
           last = v[i]+num*2;
           if(cnt==3)return false;
           temp[cnt++] = v[i]+num;
       }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin>>n;
    v = vector<int>(n);
    rep(n)cin>>v[i];
    sort(v.begin(),v.end());

    double l=0,r =2e9;
    vector<double>ans;
    for(int i=0;i<100;i++){
        double mid = l + (r-l)/2;
        if(can(mid)){
            r=mid;
            ans = temp;
        }else l=mid;
    }


    cout<<fixed<<setprecision(6);
    cout<<l<<endl;
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;


}

