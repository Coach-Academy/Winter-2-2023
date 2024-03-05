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
const int N = 1e6+7;
int primes[N];
int pre [11][N];
using namespace std;
void solve(){
    for(int i=2;i<N;i++){
        if(primes[i])continue;
        for(int j = i;j<N;j+=i){
            primes[j]++;
        }
    }
    for(int i =0;i<11;i++){
        pre[i][0]=0;
        for(itn j =1;j<=N;j++){
            pre[i][j] = (pre[i][j-1] +(primes[j]==i) );
        }
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    int t;cin>>t;
    while(t--){
        int a,b,n;cin>>a>>b>>n;
        cout<<pre[n][b] - pre[n][a-1]<<endl;
    }
//    solve();


}
