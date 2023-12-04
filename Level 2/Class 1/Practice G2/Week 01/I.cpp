#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
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
    vector<int>res;
    int n;cin>>n;
    int prev = 0;
    for(int i =0;i<n;i++){
        int a;cin>>a;
        if(a==1&&prev){
            res.push_back(prev);
        }
        if(i==n-1)res.push_back(a);
        prev = a;
    }
    cout<<res.size()<<endl;
    for(auto &a:res)cout<<a<<" ";

}
