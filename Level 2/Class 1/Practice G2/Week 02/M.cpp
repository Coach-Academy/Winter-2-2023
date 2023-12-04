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

queue<pair<int,int>>q;
set<pair<int,int>>s;
int idx = 1, n;cin>>n;
while(n--){
    int op;cin>>op;
    if(op==1){
        int val;cin>>val;
        s.insert({-val,idx});
        q.push({-val,idx});
        idx++;
    }else if(op==2){
        while(!s.count(q.front()))q.pop();
        cout<<q.front().second<<" ";
        s.erase(q.front());
        q.pop();
    }
    else {
        cout<<s.begin()->second<<" ";
        s.erase(s.begin());
    }
}

}
// 2 3 -5 -1 -1 -1
