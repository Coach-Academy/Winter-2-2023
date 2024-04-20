#include <bits/stdc++.h>

using namespace std;

int main() {
    string n; cin >> n;
    bool bad = false;
    for (auto &i : n) {
        if (i != '9') bad = true;
    }
    if (bad && n.size() > 1) {
        n[0]--;
        for (int i = 1; i < n.size(); i++) n[i] = '9';
    }
    int sm = 0;
    for (auto &i : n) sm+=i-'0';
    cout << sm << '\n';
    return 0;
}
