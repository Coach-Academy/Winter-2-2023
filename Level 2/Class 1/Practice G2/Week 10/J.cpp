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
#define vi vector<int>
using namespace std;
const ll N = 1e8+1;
void solve(){
    vector<bool>v(N+7,true);
    for(ll i=2;i*i<=N;i++) {
        if (v[i]) {
            for (ll j = i * i; j <= N; j += i)
                v[j] = false;
        }
    }
    int cnt = 0;
    for(int i = 2;i<N;i++){
        if(v[i]){
            if(cnt%100==0){
                cout<<i<<endl;
            }
            cnt++;
        }

    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



//    int t;cin>>t;
//    while(t--){
//        int a,b,n;cin>>a>>b>>n;
//        cout<<pre[n][b] - pre[n][a-1]<<endl;
//    }
    solve();




}
