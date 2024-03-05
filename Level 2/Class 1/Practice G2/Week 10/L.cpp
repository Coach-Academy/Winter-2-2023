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
int arr[2007];
void solve()
{
    for(ll i=2;i*i<=2000;i++){
        if(arr[i]==0){
            for(ll j = i*i;j<=2000;j+=i){
                arr[j]=1;
            }
        }
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
//    int t;cin>>t;
//    while(t--){
//        int a,b,n;cin>>a>>b>>n;
//        cout<<pre[n][b] - pre[n][a-1]<<endl;
//    }
//    solve();

    map<char,int>mp;
    char c ='a';
    for(int i =1;i<=26;i++,c++){
        mp[c]=i;
    }
     c ='A';
    for(int i =1;i<=26;i++,c++){
        mp[c]=26+i;
    }

    string s;
    while(cin>>s){
        ll ans = 0;
        for(auto a :s)ans+=mp[a];
        if(!arr[ans])cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;
    }

}
