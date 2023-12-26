#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



signed  main(){
    FAST

    int n;
    cin>>n;
    vector<int>vec(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    ll x;
    cin>>x;
    ll cnt=(x/sum);
    x-=(cnt*sum);
    cnt*=vec.size();
    for(int i=0;x>=0;i++){
        x-=vec[i];
        cnt++;
    }
    cout<<cnt<<'\n';



    return 0;
}

