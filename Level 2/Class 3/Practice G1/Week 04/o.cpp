#include<bits/stdc++.h>
using namespace std;




signed  main(){

    int n;
    cin>>n;
    vector<char>vec(2*n);
    for(int i=0;i<2*n;i++)cin>>vec[i];
    sort(vec.begin(),vec.begin()+n);
    sort(vec.begin()+n,vec.begin()+(2*n));
    bool flag1=0,flag2=0;
    for(int i=0;i<n;i++){
        flag1|=vec[i]<=vec[i+n];//1
        flag2|=vec[i]>=vec[i+n];//0
    }
    if(flag1==1&&flag2==1)cout<<"NO\n";
    else cout<<"YES\n";

    return 0;
}

