#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, ans = 0;
        cin >> n >> m;
        set<int> st;
        while (n--)
        {
            cin >> x;
            st.insert(x);
        }
        while (m--)
        {
            cin >> x;
            if(st.count(x)) ans++;
        }
        cout << ans << '\n';
    }
}