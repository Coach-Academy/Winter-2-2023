#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



signed  main(){
    FAST
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        sort(vec.begin(),vec.end());
        int mn=2000;
        for(int i=0;i+1<n;i++){
            mn=min(mn,vec[i+1]-vec[i]);
        }
        cout<<mn<<'\n';

    }




    return 0;
}

