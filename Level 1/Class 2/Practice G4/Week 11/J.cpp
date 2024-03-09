#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string tmp = "";
        int f = 1;
        for (int i = 0; i < s.size(); ++i) {
            if ( f == 1)
            {
                if ( s[i] == '0')
                    f = 0;
                else
                    tmp += s[i];
            }
            else
                tmp += s[i];
        }
        if ( f == 1)
            tmp.pop_back();

        cout << tmp << endl;

    }

    return 0;
}