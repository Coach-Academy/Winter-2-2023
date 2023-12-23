#include<bits/stdc++.h>

using namespace std;

int main() {

    int t =1;
    //cin >> t;
    while(t--){
        string s;
        getline(cin , s);
        int ans =0;
        for (char i = 'a'; i <= 'z' ; ++i) {
            int cnt =0;
            for (int j = 0; j < s.size(); ++j) {
                if ( s[j] == i)
                    cnt++;
            }
            if ( cnt > 0)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}