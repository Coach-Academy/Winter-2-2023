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
    int n,k;cin>>n>>k;
    queue<pair<int,int>>q;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        q.push({a,i});
    }
    while(q.size()>1){
        auto p = q.front();
        q.pop();
        p.first-=k;
        if(p.first>0){
            q.push(p);
        }
    }
    cout<<q.front().second;
}
