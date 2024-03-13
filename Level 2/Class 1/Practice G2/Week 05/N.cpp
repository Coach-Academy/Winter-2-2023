#include <iostream>
#include <bits/stdc++.h>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "unordered_map"
#include "cstring"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout<<fixed<<setprecision(1);
    multiset<int>right;
    multiset<int,greater<int>>left;
    int n;cin>>n;
    while(n--){
        char type;int x;
        cin>>type>>x;
        if(type=='a'){
            if(left.empty()||x<=*left.begin()){
                left.insert(x);
                if(left.size()>right.size()+1){
                    right.insert(*left.begin());
                    left.erase(left.begin());
                }
            }
            else{
                right.insert(x);
                if(right.size()>left.size()){
                    left.insert(*right.begin());
                    right.erase(right.begin());
                }
            }


        }
        else {
            auto r_itr = right.find(x);
            if(r_itr!=right.end()){
                right.erase(r_itr);
                if(right.size()+1<left.size()) {
                    right.insert(*left.begin());
                    left.erase(left.begin());
                }
            }
            else {
                auto l_Itr = left.find(x);
                if(l_Itr==left.end()){
                    cout<<"Wrong!"<<endl;
                    continue;
                }
                left.erase(l_Itr);
                if(left.size()<right.size()){
                    left.insert(*right.begin());
                    right.erase(right.begin());
                }

            }
        }
        if(left.empty()){
            cout<<"Wrong!"<<endl;
            continue;
        }
        if(right.size()==left.size()){
            ll ans = *left.begin()*1LL + *right.begin();
            if(ans&1)cout<<ans/2.0<<endl;
            else cout<<ans/2<<endl;
        }
        else cout<<*left.begin()<<endl;

    }

}
