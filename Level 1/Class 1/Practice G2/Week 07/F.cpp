#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main() {

  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  for (int i =0 ; i < n-1 ; i++){
      if (s[i] == s[i+1])
          ans++;
  }
  cout << ans ;
    return 0;
}