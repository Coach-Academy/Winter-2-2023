#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'A' and s[i] <= 'Z')
            s[i] += 32;
    }
    int cnt = 0;
    for (char i = 'a'; i <= 'z'; ++i) {
        if(s.find(i) != string::npos)
            cnt++;
    }
    if(cnt == 26)
        cout << "YES";
    else
        cout << "NO";

}