#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> cnt(n), price(n);
    for (int i = 0; i < n; ++i) {
      cin >> cnt[i] >> price[i];
    }
    vector<int> dp(n + 1);
    for (int l = n - 1; l >= 0; --l) {
      int &res = dp[l], sum = 10;
      res = INT_MAX;
      for (int r = l; r < n; ++r) {
        sum += cnt[r];
        res = min(res, (sum * price[r]) + dp[r + 1]);
      }
    }
    cout << dp[0] << '\n';
  }

}
