#include <bits/stdc++.h>
using namespace std;
int main()
{
  string n;
  cin >> n;
  for (int i = 0 ; i <= 9 ; i++){
    string rev = n;
    reverse(rev.begin(),rev.end());
    if (n == rev){
      cout << "Yes\n";
      return 0;
    }
    n = '0' + n;
  }
  cout << "No\n";
  return 0;
}
