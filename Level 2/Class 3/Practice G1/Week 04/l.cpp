#include<bits/stdc++.h>
using namespace std;




signed  main(){

    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
    for(int i=0;i<n/2;i++)cout<<vec[i]<<' '<<vec[n-i-1]<<' ';
    if(n%2)cout<<vec[n/2];
    cout<<'\n';
    return 0;
}

