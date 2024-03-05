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
bool is_prime (int n){
    if(n==2)return true;
    else if(n%2==0)return false;
    else {
        for(itn i =3;i*i<=n;i+=2){
            if(!(n%i))return false;
        }
        return true;
    }

}
void make_primes(ll arr[]){
    ll temp =0;
    for(ll i =2;i<=1000000;i++){
        if(is_prime(i))temp+=i;
        arr[i]=temp;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;cin>>t;
    ll arr[1000007]={0};
    make_primes(arr);
    while(t--){
        int n;cin>>n;
        cout<<arr[n]<<endl;
    }
//    int t;cin>>t;
//    while(t--){
//        int a,b,n;cin>>a>>b>>n;
//        cout<<pre[n][b] - pre[n][a-1]<<endl;
//    }
//    solve();




}
