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
    string s;
    cin >> s;
    while (s.back() == '0')
        s.pop_back();
    string t = s;
    reverse(t.begin(),  t.end());
    if ( s == t)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}