#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[4] = {0};
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] != '+')
            freq[s[i] - '0']++;
    }
    s.clear();
    for (int i = 1; i <= 3; ++i) {
        while(freq[i]--)
        {
            s.push_back(i + '0');
            s.push_back('+');
        }
    }
    s.pop_back();
    cout << s;
}