#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main() {

  string s;
  cin >> s;
 while (s.back()=='0')
     s.pop_back();
   string reversed = s;
    reverse(reversed.begin() , reversed.end());
    if (s == reversed)
        cout << "Yes";
    else cout << "No" ;
    return 0;
}
