#include<bits/stdc++.h>
using namespace std;




signed  main(){
    int n;
    cin>>n;
    vector<long long>vec(n+1),srt(n+1);
    for(int i=1;i<=n;i++)cin>>vec[i];
    srt=vec;
    sort(srt.begin(),srt.end());
    for(int i=1;i<=n;i++)vec[i]+=vec[i-1];
    for(int i=1;i<=n;i++)srt[i]+=srt[i-1];
    int q;
    cin>>q;
    while(q--){
        int op,l,r;
        cin>>op>>l>>r;
        if(op==1)cout<<vec[r]-vec[l-1]<<'\n';
        else cout<<srt[r]-srt[l-1]<<'\n';
    }


    return 0;
}

