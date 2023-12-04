#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
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

    string ss;
    set<string>s;
    while(cin>>ss){
        string cur = "";
        for(auto a :ss){
            char c = tolower(a);
            if(c>='a'&&c<='z')cur+=c;
            else if(cur!="")s.insert(cur),cur="";
        }
        if(cur!="")s.insert(cur);
    }
    for(auto a : s)cout<<a<<endl;

}
// 2 3 -5 -1 -1 -1
