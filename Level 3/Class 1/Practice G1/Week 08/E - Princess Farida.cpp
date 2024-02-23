#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
  int n;
  cin >> n;
  if (!n) {
    cout << "0\n";
    return;
  }
  vector<int> arr(n);
  for (int &x: arr) {
    cin >> x;
  }
  vector<ll> dp(3);
  for (int i = 0; i < n; ++i) {
    ll opt1 = arr[i], opt2 = 0;
    if (i - 2 >= 0) {
      opt1 += dp[(i - 2) % 3];
    }
    if (i - 1 >= 0) {
      opt2 = dp[(i - 1) % 3];
    }
    dp[i % 3] = max(opt1, opt2);
  }
  cout << dp[(n - 1) % 3] << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int i = 1; i <= tc; ++i) {
    cout << "Case " << i << ": ";
    solve();
  }
}
