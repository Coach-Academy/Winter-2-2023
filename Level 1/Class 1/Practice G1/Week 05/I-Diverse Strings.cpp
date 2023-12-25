#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (char i = 'a'; i <= 'z'; ++i) {
            if(s.find(i) != string::npos)
                cnt++;
            else if(s.find(i) == string::npos and cnt != 0) break;
           
        }
        if(cnt == s.size())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}