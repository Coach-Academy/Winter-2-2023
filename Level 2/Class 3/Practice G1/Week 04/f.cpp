#include<bits/stdc++.h>
using namespace std;



signed  main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
    swap(vec[0],vec[n-1]);
    for(int i=0;i<n;i++)cout<<vec[i]<<' ';


    return 0;
}

