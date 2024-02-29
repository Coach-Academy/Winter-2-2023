#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using namespace std;

int main()
{
    FAST;
    int tc;
    cin >> tc;
    unordered_map<string , int>mp;
    while(tc--){
        string s;
        cin >> s;
        if(mp.find(s)!=mp.end()){
            cout << s << mp[s] << endl;
        }
        else{
            cout << "OK" << endl;
        }
        mp[s]++;
    }
}
