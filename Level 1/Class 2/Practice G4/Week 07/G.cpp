#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    string s;
    cin >> s;
    string tmp="" , final = "";
    for (int i = 0; i < s.size(); i+=2) {
        tmp += s[i];
    }
    sort(tmp.begin(),  tmp.end());
    for (int i = 0; i < tmp.size(); ++i) {
        final += tmp[i];
        final += '+';
    }
    final.pop_back();
    cout << final << endl;
    return 0;
}