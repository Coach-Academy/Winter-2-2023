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
    ll sum =0;
    int sz = s.size();
    for (int msk = 0; msk < (1 << (sz-1)); ++msk) {
        ll num = (s[0]-'0');
        for (int i = 0; i < sz-1; ++i) {
            if ((1 << i) & msk )
            {
                sum +=  num;
                num = 0;
            }
            num *= 10;
            num += (s[i+1]-'0');
        }
        sum += num;
    }
    cout << sum << endl;
    return 0;
}