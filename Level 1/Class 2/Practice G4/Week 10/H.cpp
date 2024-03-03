#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 5e5+7;
bool vis[N];
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        set<int> st;
        for (int i = 0; i < n+m; ++i) {
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << n+m - st.size() << endl;
    }
    return 0;
}