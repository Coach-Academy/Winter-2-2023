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
        int cnt=0;
        for(int i=0;i+1<n;i++){
            int mx=max(vec[i],vec[i+1]);
            int mn=min(vec[i],vec[i+1]);
            while(2*mn<mx){
                mn*=2;
                cnt++;
            }
        }
        cout<<cnt<<'\n';

    }




    return 0;
}

