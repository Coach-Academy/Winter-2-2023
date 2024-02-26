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
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<string>log;
    int n;cin>>n;
    while(n--){
        string query;cin>>query;
        if(query=="insert"){
            int val;cin>>val;
            pq.push(val);
            query+=" ";
            query+= to_string(val);
            log.push_back(query);
        }
        else{
            if(query=="removeMin"){
                if(pq.empty()){
                    log.push_back("insert 1");
                }
                else pq.pop();
                log.push_back(query);
            }
            else {
                int val;cin>>val;
                while(!pq.empty()&&pq.top()<val){
                    log.push_back("removeMin");
                    pq.pop();
                }
                if(pq.empty()||pq.top()>val){
                    pq.push(val);
                    log.push_back("insert "+ to_string(val));
                }
                query+=" ";
                query+= to_string(val);
                log.push_back(query);
            }
        }

    }





    cout<<log.size()<<endl;
    for(auto a : log)cout<<a<<endl;
}
