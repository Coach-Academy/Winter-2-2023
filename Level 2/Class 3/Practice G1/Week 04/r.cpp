#include<bits/stdc++.h>
using namespace std;




signed  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        sort(vec.begin(),vec.end());
        long long mx=1;
        for(int i=n-1;i>=n-5;i--)mx*=vec[i];

        cout<<max({mx,(vec[0]*vec[1]*vec[n-1]*vec[n-2]*vec[n-3]),(vec[0]*vec[1]*vec[2]*vec[3]*vec[n-1])})<<'\n';


    }


    return 0;
}

