#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



signed  main(){
    FAST
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>vec(n);
        int numOdd=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]%2!=0)numOdd++;
        }

        if(numOdd<k||(numOdd-k)%2!=0)cout<<"NO\n";
        else{
            cout<<"YES\n";
            int cnt=0;
            for(int i=0;i<n;i++){
                if(cnt==k-1)break;
                if(vec[i]%2!=0){
                    cnt++;
                    cout<<i+1<<' ';
                }
            }
            cout<<n<<'\n';

        }


    }




    return 0;
}

