#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 5e5+7;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--)
    {
      int n,m;
      cin >> n >> m;
      set<int> st;
        for (int i = 0,x; i < n; ++i) {
            cin >> x;
            for (int j = 0,y; j < x; ++j) {
                cin >> y;
                st.insert(y);
            }
        }
        if ( st.size() == m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}