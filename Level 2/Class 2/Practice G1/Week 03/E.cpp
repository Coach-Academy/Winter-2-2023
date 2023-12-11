#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> pref(s.size());
    for (int i = 0; i < pref.size()-1; ++i) {
        if ( s[i] == s[i+1])
            pref[i] = 1;
        if ( i)
            pref[i] += pref[i-1];
    }


    int q;
    cin >> q;
    while (q--)
    {
        int l , r;
        cin >>  l >> r;
        r--;


        int newl = l-1 , newr= r-1;

        cout << pref[newr] - (  newl  ?  pref[newl-1] : 0) << endl;
    }
    return 0;

}