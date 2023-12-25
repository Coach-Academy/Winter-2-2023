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
    vector<int> v;
    for (int i = 0; i < s.size(); i+=2) {
        v.push_back(s[i] - '0');
    }
    sort(v.begin(),  v.end());
    cout << v[0];
    for (int i = 1; i < v.size(); ++i) {
        cout << "+" << v[i];
    }
    return 0;
}