#include<bits/stdc++.h>
using namespace std;




signed  main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>vec(n),idx(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        for(int i=0;i<m;i++){
            int pos;
            cin>>pos;
            pos--;
            idx[pos]=1;
        }

        for(int i=0;i<n;i++){
            if(idx[i]==0)continue;
            int j=i;
            while(j<n&&idx[j]==1)j++;
            sort(vec.begin()+i,vec.begin()+j+1);
            i=j;
        }
        bool flag=1;
        for(int i=0;i+1<n;i++)flag&=vec[i]<=vec[i+1];

        if(flag)cout<<"YES\n";
        else cout<<"NO\n";


    }


    return 0;
}

