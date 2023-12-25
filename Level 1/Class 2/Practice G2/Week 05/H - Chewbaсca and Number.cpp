#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  for (int i = 0 ; i < s.size() ; i++){
    if (i == 0 && s[i] == '9')
      continue;
    if (('9'-s[i]) < (s[i]-'0')){
      s[i] = char(('9'-s[i]) + '0');
    } 
  }
  cout << s << '\n';
  return 0;
}
