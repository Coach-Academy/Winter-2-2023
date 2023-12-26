#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



signed  main(){
    FAST
    int n;
    cin>>n;
    bool flag=1;
    int tp;
    cin>>tp;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        if(l==tp||r==tp||r==7-tp||l==7-tp)flag=0;
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

