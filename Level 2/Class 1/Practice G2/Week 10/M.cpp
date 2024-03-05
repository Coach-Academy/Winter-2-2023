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
int arr[1007];
using namespace std;
ll MOD = 1e9+7;
void solve()
{
    ll ans =1,n;
    cin>>n;
    for(ll i =1;i<=n;i++){
        ll temp = i;
        for(ll j=2;j<=temp;j++){
            while(temp%j==0){
                temp/=j;
                arr[j]++;
            }
        }
    }
    for(int i =1;i<=n;i++){
        ans*=(arr[i]+1);
        ans%=MOD;
    }
    cout<<ans;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

//    int t;cin>>t;
//    while(t--){
//        int a,b,n;cin>>a>>b>>n;
//        cout<<pre[n][b] - pre[n][a-1]<<endl;
//    }
    solve();


}
