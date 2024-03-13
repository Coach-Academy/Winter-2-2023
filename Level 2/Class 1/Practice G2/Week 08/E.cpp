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
int total ,n;
vector<int>v(20);
set<vector<int>>s;
vector<int>path;
void solve(int idx=0,int sum=0){
    if(idx==n){
        if(sum==total){
            s.insert(path);
        }
        return;
    }
    // pick
    path.push_back(v[idx]);
    solve(idx+1,sum+v[idx]);
    //undo
    path.pop_back();
    //leave
    solve(idx+1,sum);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    while(cin>>total){
        cin>>n;
        if(n==0)break;
        rep(n)cin>>v[i];
        sort(v.begin(),v.begin()+n);
        reverse(v.begin(),v.begin()+n);
        s.clear();
        solve();
        cout<<"Sums of "<<total<<":"<<endl;
        if(s.empty())cout<<"NONE\n";
        else{
            auto it = s.rbegin();
            while(it!=s.rend()){
                for(int i=0;i<(*it).size()-1;i++){
                    cout<<(*it)[i]<<"+";
                }
                cout<<(*it).back()<<endl;
                it++;
            }
        }


    }

}
