#include<bits/stdc++.h>
using namespace std;




signed  main(){

    int n;
    cin>>n;
    vector<pair<int,int>>vec(n);
    bool flag=0;
    for(int i=0;i<n;i++){
        cin>>vec[i].first>>vec[i].second;
        flag|=vec[i].first!=vec[i].second;
    }

    if(flag)cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";
    return 0;
}

