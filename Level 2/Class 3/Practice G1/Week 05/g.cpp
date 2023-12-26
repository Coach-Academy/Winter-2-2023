#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



signed  main(){
    FAST

    string s;
    cin>>s;
    while(s.back()=='0')s.pop_back();
    string ns=s;
    reverse(ns.begin(),ns.end());
    if(ns==s)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}

