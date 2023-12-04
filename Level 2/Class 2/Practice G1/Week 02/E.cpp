#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void solve()
{
    string  s= "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    string word;
    cin >>c >> word;
    for (int i = 0; i < word.size(); ++i) {
        int pos = s.find(word[i]);
        if ( c == 'R')
            cout << s[pos-1];
        else
            cout << s[pos+1];

    }
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
     int t=1;
     //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}