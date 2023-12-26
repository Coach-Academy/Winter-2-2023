#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



signed  main(){
    FAST

    string s;
    cin>>s;
    string ns="";
    for(int i=0;i<s.length();i+=2)ns+=s[i];
    sort(ns.begin(),ns.end());
    for(int i=0;i<ns.length();i++){
        if(!i)cout<<ns[i];
        else cout<<"+"<<ns[i];
    }
    return 0;
}

