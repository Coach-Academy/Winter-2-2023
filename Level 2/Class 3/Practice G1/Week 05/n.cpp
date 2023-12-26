#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



signed  main(){
    FAST
    int q;
    cin>>q;
    multiset<ll>st;
    multiset<ll>::iterator itr;
    while(q--){
        char op;
        int val;
        cin>>op>>val;
        if(op=='a'){
            st.insert(val);
            if(st.size()==1)itr=st.begin();
            else if(st.size()%2!=0&&val<*itr)itr--;
            else if(st.size()%2==0&&val>=*itr)itr++;

            if(st.size()%2!=0){
                cout<<*itr<<'\n';
            }
            else{
                auto tmp=itr;
                tmp--;
                if((*tmp+*itr)%2==0)cout<<(*tmp+*itr)/2<<'\n';
                else {
                    cout<<fixed<<setprecision(1)<<(*tmp+*itr)/2.0<<'\n';
                }
            }
        }
        else{
            if(st.empty()||st.find(val)==st.end())cout<<"Wrong!\n";
            else{
                if(st.size()%2!=0&&val<=*itr)itr++;
                else if(st.size()%2==0 && val>*itr)itr--;
                else if(st.size()%2==0 && st.find(val)==itr)itr--;
                st.erase(st.find(val));
                if(st.empty())cout<<"Wrong!\n";
                else if(st.size()%2!=0){
                    cout<<*itr<<'\n';
                }
                else{
                    auto tmp=itr;
                    tmp--;
                    if((*tmp+*itr)%2==0)cout<<(*tmp+*itr)/2<<'\n';
                    else cout<<fixed<<setprecision(1)<<(*tmp+*itr)/2.0<<'\n';
                }


            }
        }



    }




    return 0;
}

