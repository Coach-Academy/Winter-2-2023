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

    priority_queue<int,vector<int>,greater<int>>pq;
    queue<int>q;
    int n;cin>>n;
    while(n--){
        int op;
        cin>>op;
        if(op==1){
            int val;cin>>val;
            q.push(val);
        }
        else if(op==2){
            if(pq.size()){
                cout<<pq.top()<<endl;
                pq.pop();
            }
            else {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
        else {
            while(q.size()){
                pq.push(q.front());
                q.pop();
            }
        }
    }
}
