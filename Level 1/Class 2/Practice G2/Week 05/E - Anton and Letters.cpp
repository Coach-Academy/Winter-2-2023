#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  int ans = 0;
  for (char ch = 'a' ; ch <= 'z' ; ch++){
    for (int i = 0 ; i < s.size() ; i++){
      if (s[i] == ch){
        ans++;
        break;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
