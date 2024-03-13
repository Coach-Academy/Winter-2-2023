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
        int n,m;cin>>n>>m;
        vector<int>a(n),p(n);
        rep(n)cin>>a[i];
        rep(m){
            int val;cin>>val;
            p[val-1]=1;
        }
        for(int i=0;i<n;i++){
            if(p[i]==0)continue;
            int j=i;
            while(j<n&&p[j])j++;
            sort(a.begin()+i,a.begin()+j+1);
            i = j;
        }
        bool ok = true;
        rep(n-1){
            ok&=a[i]<=a[i+1];
        }

        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
