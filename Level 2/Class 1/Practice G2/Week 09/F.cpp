#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "cmath"
#include "iomanip"
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
    string s,ss;cin>>s>>ss;
    int target=0,cur=0,x=0,ans=0;
    for(auto a : s)a=='-'?target--:target++;
    for(auto a : ss){
        switch (a) {
            case '+':cur++;
                break;
            case '-':cur--;
                break;
            default:x++;
        }
    }
    if(x==0)cout<<(target==cur)<<endl;
    else{
        for(int mask = 0;mask<(1<<x);mask++){
            int temp =0;
            for(int i = 0;i<x;i++){
                if(mask&(1<<i))temp++;
                else temp--;
            }
            ans+=(temp+cur)==target;
        }


        cout<<fixed<<setprecision(10)<<ans*1.0/(1<<x)<<endl;
    }


}

