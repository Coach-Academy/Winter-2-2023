#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 5e5+7;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string s ="qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char, int>mp;
    for (int i = 0; i < s.size(); ++i) {
        mp[s[i]] = i;
    }
    char c;
    cin >> c;
    string t;
    cin >> t;
    for (int i = 0; i < t.size(); ++i) {
        if ( c == 'R')
        {
            cout << s[mp[t[i]]-1];
        }
        else
            cout << s[mp[t[i]] +1];
    }

    return 0;
}