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
    stack<char>st;
    string s;cin>>s;
    for(auto a : s ){
        if(st.empty()||st.top()!=a)st.push(a);
        else st.pop();
    }
    if(st.empty())cout<<"Yes";
    else cout<<"No";


}
