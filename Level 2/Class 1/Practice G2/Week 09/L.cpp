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


    int n;cin>>n;
    vector<int>v(n);
    int total =0;
    for(int i =0;i<n;i++){
        cin>>v[i];
        total^=v[i];
    }
    rep(n){
        cout<<(total^v[i])<<" ";
    }
    // 4
    // 20 11 9 24
    // a  b  c  d
    //(,,),(,,),(,,d),(a,b,c)
}

