#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  if (s[0] >= 'a' && s[0] <= 'z')
    s[0] = char(s[0]-32);
  cout  << s << '\n';
  return 0;
}

// another solution

#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  s[0] = toupper(s[0]);
  cout  << s << '\n';
  return 0;
}
