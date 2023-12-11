#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a = 0, b = 0, c = 0, d = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if(x == 4) a++;
        else if(x == 3) b++;
        else if(x == 2) c++;
        else d++;
    }
    ans += a;
    ans += b;
    ans += (c / 2) + (c % 2);
    d -= (b + (c % 2) * 2);
    if(d > 4) ans += (d / 4) + (d % 4 != 0);
    else if(d > 0) ans++;
    cout << ans;
}