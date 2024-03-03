#include <bits/stdc++.h>

using namespace std;

bool sup(string a, string b) {
    set<char> st;
    for (auto i: a)
        st.insert(i);

    for (auto i: b)
        if (st.count(i)) return true;

    return false;
}

int main() {

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if(sup(a, b)) cout << "YES\n";
        else cout << "NO\n";
    }
}