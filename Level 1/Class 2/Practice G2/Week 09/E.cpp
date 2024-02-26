#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "unordered_map"
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
queue<pair<int,int>>q;

int n,k;cin>>n>>k;
for(int i =0;i<n;i++){
    int a;cin>>a;
    q.push({a,i+1});
}
while(q.size()>1){
    pair<int,int> a = q.front();
    a.first-=k;
    q.pop();
    if(a.first>0)q.push(a);
}
cout<<q.front().second;



}
//
// {{2,4}}
