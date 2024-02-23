#include <bits/stdc++.h>

using namespace std;
#define ll long long
vector<int> arr;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  vector<int> dp(n, 1);
  int mx = 1;
  for (int i = 1; i < arr.size(); ++i) {
    for (int lst = 0; lst < i; ++lst) {
      int pick = 0;
      if (arr[i] > arr[lst]) {
        pick = 1 + dp[lst];
      }
      dp[i] = max(dp[i], pick);
      mx = max(mx, dp[i]);
    }
  }
  cout << mx;
}
