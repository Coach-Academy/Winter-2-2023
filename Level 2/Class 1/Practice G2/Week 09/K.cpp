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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    itn t;cin>>t;
    while(t--){
        itn n;cin>>n;
        int temp = n,pos=0;
        while(temp){
            pos++;
            if(temp&1)break;
            temp>>=1;
        }
        int a = (1<<(pos-1));
        int b = n^a;
        if(a==0||b==0){
            cout<<-1<<endl;
        }
        else cout<<a<<" "<<b<<endl;



    }

}

