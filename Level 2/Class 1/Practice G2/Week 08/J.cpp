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
int n,time_,sum =0;
vector<int>v(100),res,path;
void solve(int idx,int curSum){
    if(idx == n){//base case
        if(curSum<=time_&&curSum>=sum){
            sum = curSum;
            res = path;
        }
        return;
    }
    //pick
    curSum +=v[idx];
    path.push_back(v[idx]);
    solve(idx+1,curSum);
    //undo
    curSum-=v[idx];
    path.pop_back();

    //leave
    solve(idx+1,curSum);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    while(cin>>time_){
        cin>>n;
        res.clear();
        path.clear();
        sum = 0;
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        solve(0,0);
        for(int i =0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<"sum:"<<sum<<endl;


    }


}
