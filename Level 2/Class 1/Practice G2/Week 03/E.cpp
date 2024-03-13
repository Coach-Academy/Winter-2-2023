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
    string s;cin>>s;
    int n = s.size();
    vector<int>pref(n);
    for(int i =1;i<n;i++){
        pref[i] +=pref[i-1] + (s[i]==s[i-1]);
    }
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        l--,r--;
        cout<<pref[r]-pref[l]<<endl;
    }

}
