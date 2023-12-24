#include<bits/stdc++.h>

using namespace std;

int main() {

    int t =1;
    //cin >> t;
    while(t--){
        string s;
        cin >>s;
        while (s.back() == '0')
        {
            s.pop_back();
        }
        string s2 = s;
        reverse(s.begin() , s.end());
        if (s == s2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}