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

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll>v(n);
        rep(n)cin>>v[i];
        sort(v.begin(),v.end());
        int i = (n-1)/2;
        int j =i+1;
        while(i>=0&&j<n)
            cout<<v[i--]<<" "<<v[j++]<<" ";
        if(i==0)cout<<v[i]<<endl;
        else if(j==n-1)cout<<v[j]<<endl;
        else cout<<endl;

    }


}
