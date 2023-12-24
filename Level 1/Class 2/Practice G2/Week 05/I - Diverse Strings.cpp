#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0 ; i < n ; i++){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    bool ans = true;
    for (int j = 0 ; j < s.size()-1 ; j++){
      if (s[j+1]-s[j] != 1){
        ans = false;
        break;
      }
    }
    if (ans == true) 
      cout << "YES\n";
    else 
      cout << "NO\n";  
  }
  return 0;
}
