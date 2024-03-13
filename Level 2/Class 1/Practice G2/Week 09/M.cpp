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

    int l,r;cin>>l>>r;
    int ans = 0,pos=0;
    for(int i =31;i>=0;i--){
        int bitL = (l>>i)&1;
        int bitR = (r>>i)&1;
        if(bitL!=bitR){
            pos = i;
            break;
        }
    }
    cout<<(1<<(pos+1))-1;


}

