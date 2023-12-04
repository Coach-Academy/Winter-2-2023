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
    queue<int>q;
    while(n--){
        int a;cin>>a;
        if(a==1){
            int val;cin>>val;
            q.push(val);
        }
        else if(a==2){
            if(!q.empty())
                q.pop();
        }
        else {
            if(q.size())
                cout<<q.front()<<endl;
            else cout<<"Empty!"<<endl;
        }

    }

}



