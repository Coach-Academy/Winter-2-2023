#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        bool f = 1;
        sort(s.begin(),  s.end());
        for (int i = 1; i < s.size(); ++i) {
            if ( s[i]  != s[i-1]+1)
            {
                f =0;
            }
        }
        if ( f)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}