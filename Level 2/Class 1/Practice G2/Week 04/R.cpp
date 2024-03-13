using namespace std  ;
#include <bits/stdc++.h>



int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<long long > vec;
        for (int i = 0; i < n; i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        long long ans=-1e18;
        int a, b,c,d,e;
        for(int i=0;i<5;i++){
            a=(n+i-1)%n,b=(n+i-2)%n, c=(n+i-3)%n, d=(n+i-4)%n,e=(n+i-5)%n;
            ans=max(ans,vec[a]*vec[b]*vec[c]*vec[d]*vec[e]);
        }
        cout<<ans<<'\n';



    }
}
