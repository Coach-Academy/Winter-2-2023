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
void solve(){
    while(true){
        ll n;cin>>n;
        if(n==0)break;
        for(ll i =2;i*i<=n;i++){
            ll cnt = 0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            if(cnt){
                cout<<i<<"^"<<cnt<<" ";
            }

        }
        if(n>1)cout<<n<<"^"<<1<<endl;
        else cout<<endl;

    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

//    int t;cin>>t;
//    while(t--){
//        solve();
//    }
    solve();


}
