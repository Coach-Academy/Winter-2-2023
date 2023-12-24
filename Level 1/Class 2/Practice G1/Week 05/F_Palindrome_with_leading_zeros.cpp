#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    while (n.back() == '0') {
        n.pop_back();
    }
    string rn = n;
    reverse(rn.begin(), rn.end());
    if (n == rn)cout << "Yes";
    else cout << "No";
    return 0;
}
