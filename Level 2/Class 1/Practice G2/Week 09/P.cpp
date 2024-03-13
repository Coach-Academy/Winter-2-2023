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


    int t;cin>>t;
    while(t--){
        ll x,ans=0,cnt=1;
        cin>>x;
        while(x>0){
            if((x&1)==0)ans+=cnt;
            x>>=1;
            cnt<<=1;
        }
        cout<<ans<<endl;
    }
}


