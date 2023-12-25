#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, ans = "";
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i) 
    {
        if(isalpha(s[i]) and ans.find(s[i]) == string::npos)
        {
            ans.push_back(s[i]);
        }
    }
    cout << ans.size();
}