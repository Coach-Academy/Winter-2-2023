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
    cin >> t;
    map<string , bool > mp;
    stack<string> st;
    while (t--)
    {
      string s;
      cin >> s;
      st.push(s);
    }
    while (st.size())
    {
        string s = st.top();
        st.pop();

        if ( mp[s] == 1)
            continue;

        cout << s << endl;
        mp[s] = 1;
    }
    return 0;
}