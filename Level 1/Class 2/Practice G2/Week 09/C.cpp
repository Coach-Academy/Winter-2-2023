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


    int n,d;cin>>n>>d;
    queue<int>q;
    for(int i =0;i<n;i++){
        int a;cin>>a;q.push(a);
    }
    while(d--){
        q.push(q.front());
        q.pop();
    }
    while(q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }


}


