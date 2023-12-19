#include<bits/stdc++.h>
using namespace std;




signed  main(){

    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i].first>>vec[i].second;
        vec[i].second*=-1;
    }
    sort(vec.begin(),vec.end(),greater<pair<int,int>>());
    int i=k-1,j=k-1;

    while(i>=0&&vec[i].first==vec[k-1].first&&vec[i].second==vec[k-1].second)i--;
    while(j<n&&vec[j].first==vec[k-1].first&&vec[j].second==vec[k-1].second)j++;

    cout<<j-i-1<<'\n';

    return 0;
}

