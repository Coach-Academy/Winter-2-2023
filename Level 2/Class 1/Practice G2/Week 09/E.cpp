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

    int n;cin>>n;
    vector<ll>v;
    for(int mask = 0;mask<(1<<10);mask++){
        int cnt4 = 0,cnt7 = 0;
        ll cur = 0;
        for(int i=0;i<10;i++){
            if(mask>>i&1){
                cnt4++;
                cur=cur*10+4;
            }
            else {
                cnt7++;
                cur=cur*10+7;
            }
            if(cnt4==cnt7)v.push_back(cur);
        }
    }
    sort(v.begin(),v.end());
    cout<<*lower_bound(v.begin(),v.end(),n);

}

