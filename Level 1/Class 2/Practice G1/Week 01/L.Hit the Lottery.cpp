#include <bits/stdc++.h>

using namespace std;

int main() {
    int total, ans = 0;
    cin >> total;
    ans += total / 100; // ans = ans + total / 100;
    total = total % 100;

    ans += total / 20;
    total = total % 20;

    ans += total / 10;
    total = total % 10;

    ans += total / 5;
    total = total % 5;

    ans += total;
    cout << ans;
}