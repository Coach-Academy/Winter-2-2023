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
ll get_num_of_divisors(int n){
    ll num =0;
    for(int i = 1;i*i<=n;i++){
        if(n%i==0)num+=2;
        if(i*i==n)num--;
    }
    return num;
}
vector<ll>v(1e6+7);
void solve(){
    int a,b,c;cin>>a>>b>>c;
    ll ans = 0;
    for(int i =1;i<=a;i++){
        for(itn j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                int num = i*j*k;
                if(v[num]==0)v[num] = get_num_of_divisors(num);
                ans+= v[num];
                ans%=1073741824;
            }
        }
    }
    cout<<ans<<endl;
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
