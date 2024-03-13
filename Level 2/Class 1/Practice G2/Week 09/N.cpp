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

    int t;cin>>t;
    while(t--){
        unsigned int n;
        cin>>n;
        // another solution
        // cout<<(~n)<<endl;
        // cout<<(n^(-1))<<endl;
        rep(32){
            n^=(1<<i);
        }
        cout<<n<<endl;
    }

}


