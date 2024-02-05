#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    // {sum , {l,r}}
    set<pair<ll, pair<int,int>>> st;

    int a[n];
    ll sum =0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    st.insert({sum , {0,n-1}});
    while(k--)
    {
        sum = st.rbegin()->first;
        int l = st.rbegin()->second.first;
        int r = st.rbegin()->second.second;
        cout << sum << " ";
        st.erase(*st.rbegin());
        if ( l != r)
        {
            ll newsum = sum - a[r];
            st.insert({newsum , {l,r-1}});
            newsum = sum - a[l];
            st.insert({newsum,{l+1 , r}});
        }
    }
    return 0;
}