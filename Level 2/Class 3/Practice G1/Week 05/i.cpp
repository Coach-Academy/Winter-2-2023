#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



signed  main(){
    FAST
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        sort(vec.begin(),vec.end());
        if(vec[0]+vec[1]<=d||vec[n-1]<=d)cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;
}

