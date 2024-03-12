#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;




signed  main(){
    FAST
    int n;
    while(cin>>n,n){//n!=0
        deque<int>dq;
        for(int i=1;i<=n;i++)dq.push_back(i);

        cout<<"Discarded cards:";
        while(dq.size()>1){
            cout<<' '<<dq.front();
            dq.pop_front();
            dq.push_back(dq.front());
            dq.pop_front();
            if(dq.size()!=1)cout<<',';
        }
        cout<<'\n';
        cout<<"Remaining card: "<<dq.front()<<'\n';
    }





    return 0;
}

