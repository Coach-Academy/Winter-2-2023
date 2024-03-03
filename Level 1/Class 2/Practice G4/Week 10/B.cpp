#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 5e5+7;
void doWork()
{
    string s;
    getline(cin, s);
    set<char> st;
    for (int i = 0; i < s.size(); ++i) {
        if (isalpha(s[i]))
            st.insert(s[i]);
    }
    cout << st.size() << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t  = 1;
    //cin >> t;
    while (t--)
        doWork();

    return 0;
}