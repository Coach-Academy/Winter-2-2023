#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 5e5+7;
void doWork()
{
    string a,b;
    cin >> a>> b;
    set<char> st;
    for (int i = 0; i < a.size(); ++i) {
        st.insert(a[i]);
    }

    for (int i = 0; i < b.size(); ++i) {
        if ( st.count(b[i]))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        doWork();

    return 0;
}