#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  int freq[26] = {0};
  cin >> n >> s;
  for (int i = 0 ; i < n ; i++)
    s[i] = tolower(s[i]);
  for (int i = 0 ; i < n ; i++){
    freq[s[i]-'a']++;
  }  
  for (int i = 0 ; i < 26 ; i++){
    if (freq[i] == 0){
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}

// another solution 

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  cin >> n >> s;
  for (char i = 'a' ; i <= 'z' ; i++){
    bool ok = false;
    for (int j = 0 ; j < n ; j++){
      s[j] = tolower(s[j]);
      if (i == s[j]){
        ok = true;
      }
    }
    if (ok == false){
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}
