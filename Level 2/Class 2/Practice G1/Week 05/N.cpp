#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ordered_set<pair<int,int>> st;
    map<int,int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        char op;
        cin >> op >> val;
        if ( op == 'a')
        {
            mp[val]++;
            int ocu = mp[val];
            st.insert({val, ocu});
        }
        else
        {
            int ocu = mp[val];
            if ( ocu == 0) {
                cout << "Wrong!\n";
                continue;
            }
            else
            {
                st.erase({val,ocu});
                mp[val]--;
            }
        }
        if (st.empty())
            cout << "Wrong!\n";
        else if ( st.size()%2)
        {
            int median = st.find_by_order(st.size()/2)->first ;
            cout << median << endl;

        }
        else
        {
            ll a = st.find_by_order(st.size()/2 -1)->first;
            ll b = st.find_by_order(st.size()/2) ->first;

            ll sum = a+b;
            if ( sum < 0)
                cout <<'-';
            cout  << abs(sum)/2 ;
            if (sum%2)
                cout << ".5";
            cout << endl;
        }
    }

    return 0;
}