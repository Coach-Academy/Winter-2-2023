#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        map<string, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> s;
            if (mp[s] == 0) {
                cout<<"OK"<<'\n';
            }
            else{
                cout<<s<<mp[s]<<'\n';
            }
            mp[s]++;
        }
    }
}