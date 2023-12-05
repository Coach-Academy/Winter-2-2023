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
    int n;cin>>n;
    long long health = 0;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i =0;i<n;i++){
        int a;cin>>a;
        pq.push(a);
        health+=a;
        if(health<0){
            health-=pq.top();
            pq.pop();
        }
    }
    cout<<pq.size();

}
// 2 3 -5 -1 -1 -1
