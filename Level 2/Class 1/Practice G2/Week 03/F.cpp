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

    int q;cin>>q;
    map<int,int>vals,freq;

    while(q--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            if(vals[b])
                freq[vals[b]]--;
            vals[b]++;
            freq[vals[b]]++;
        }else if(a==2){
            if(vals[b]){
                freq[vals[b]]--;
                vals[b]--;
                freq[vals[b]]++;
            }
        }else {
            if(freq[b])cout<<1<<endl;
            else cout<<0<<endl;
        }

    }
}
