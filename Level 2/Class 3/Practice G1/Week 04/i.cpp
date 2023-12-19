#include<bits/stdc++.h>
using namespace std;



signed  main(){
    long long n,r,avg;
    cin>>n>>r>>avg;
    vector<pair<int,int>>vec;
    long long total=n*avg;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        total-=x;
        vec.push_back({y,x});
    }

    sort(vec.begin(),vec.end());
    long long ans=0;
    for(int i=0;total>0;i++){
        long long mn=min(total,r-vec[i].second);
        ans+=mn*vec[i].first;
        total-=mn;
    }
    cout<<ans<<'\n';


    return 0;
}

