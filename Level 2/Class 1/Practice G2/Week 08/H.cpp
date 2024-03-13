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
int n; bool primes [32];
bool vis[20];

vector<int>res ={1};
void solve(){
    
    if(res.size()==n){
        if(primes[res[0]+res[n-1]]) {
            rep(n)cout << res[i] << " \n"[i == n - 1];
        }
        return;
    }
    for(int i=2;i<=n;i++){
        if(vis[i])continue;
        // pick
        vis[i]=true;
        res.push_back(i);
        if(primes[i+res[res.size()-2]]){

            solve();
        }

        //undo
        vis[i]=false;
        res.pop_back();


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

    primes[2] = primes[3] = primes[5]=true;
    primes[7] = primes[11] = primes[13]=true;
    primes[17] = primes[19] = primes[23] =true;
    primes[29] = primes[31] = true;
    int tc = 1;
    while(cin>>n){

        if(tc>1)cout<<endl;
        cout<<"Case "<<tc++<<":"<<endl;
        solve();

    }


}
