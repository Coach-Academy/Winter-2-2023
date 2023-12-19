#include<bits/stdc++.h>
using namespace std;




signed  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        sort(vec.begin(),vec.end());

        int mid=(n-1)/2;
        int i=mid,j=mid+1;
        while(i>=0&&j<n){
            cout<<vec[i]<<' ';
            cout<<vec[j]<<' ';
            i--;j++;
        }
        if(i>=0)cout<<vec[i]<<' ';
        cout<<'\n';
    }


    return 0;
}

