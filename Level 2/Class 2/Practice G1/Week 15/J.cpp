#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
    int n,k;
    cin  >> n >> k;
    set<pair<ll, pair<int, int>>> st;
    int a[n];
    ll sum =0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    st.insert({sum , {0,n-1}});
    while (k--)
    {
        auto it = st.rbegin();
        int l = it->second.first ,r= it->second.second;
        sum = it->first;
        cout << it->first  << " ";
        st.erase(*it);

        if ( l == r)
            continue;
        st.insert({sum - a[l]  , { l+1 , r}});
        st.insert({sum - a[r] , {l ,r-1}});
    }

}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
        doWork();
    return 0;
}