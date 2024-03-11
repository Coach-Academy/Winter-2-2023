#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b;
int sol(int num,int steps) {
    if (num >= b) {
        if (num == b)return steps;
        return -1;
    }
    int ret;

    ret = sol(num * 2, steps + 1);
    ret = max(sol(num * 3, steps + 1), ret);
    return ret;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        cin >> a >> b;
        int ans = sol(a, 0);
        cout << ans;
    }
}