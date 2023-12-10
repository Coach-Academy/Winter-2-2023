#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int one = 0, two = 0, three = 0, four = 0;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        if (s == 1) {
            one++;
        } else if (s == 2)
            two++;
        else if (s == 3)
            three++;
        else
            four++;
    }
    int total = four;
    total = total + (two / 2);
    two = two % 2;
    if (one > three) {
        total += three;
        one -= three;
        if (two > 0) {
            one -= 2;
            total++;
        }
        total += one / 4;
        if (one % 4 > 0)
            total++;
    } else {
        total += one;
        three -= one;
        total += three;
        if (two > 0)
            total++;
    }
    cout << total << endl;
}
