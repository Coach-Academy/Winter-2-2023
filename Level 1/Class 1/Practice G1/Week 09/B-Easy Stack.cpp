#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long
int main() {
    fast;
    int t, op, x;
    cin >> t;
    stack<int> st;
    while(t--)
    {
        cin >> x;
        if(x == 1)
        {
            cin >> op;
            st.push(op);
        }
        else if(x == 2)
        {
            if(!st.empty())
                st.pop();
        }
        else
        {
            if(!st.empty())
                cout << st.top() << '\n';
            else
                cout << "Empty!\n";
        }
    }

}