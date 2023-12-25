#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,ans=0;
  cin >> n >> k;
  for (int i = 0 ; i < n ; i++){
    string s;
    cin >> s;
    int cnt = 0;
    for (int digit = 0 ; digit <= k ; digit++){
      for (int j = 0 ; j < s.size() ; j++){
        if (digit == (s[j]-'0')){
          cnt++;
          break;
        }
      }
    }
    if (cnt == k+1) 
      ans++;
  }
  cout << ans << '\n';
  return 0;
}
