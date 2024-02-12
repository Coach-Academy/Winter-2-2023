#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main() {

  string s;
  cin >> s;
  sort (s.begin() , s.end());
  for (int i =0 ; i<s.size() ; i++){
      if (s[i]!='+') {
          cout << s[i];
          if (i!=s.size()-1)
              cout << "+";
      }
  }
    return 0;
}