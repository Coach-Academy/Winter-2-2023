#include<bits/stdc++.h>

#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string s,t;
    cin >> s>> t;
    int ans = s.size() + t.size();
    while(s.size() && t.size() && s.back() == t.back())
    {
        s.pop_back();
        t.pop_back();
        ans -= 2;
    }
    cout << ans << endl;

    return 0;
}