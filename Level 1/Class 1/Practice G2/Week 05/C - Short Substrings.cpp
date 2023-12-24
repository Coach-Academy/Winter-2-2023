#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 0 ; i <  t; i++){
    string b;
    cin >> b;
    for (int j = 0 ; j < b.size() ; j++){
      if (j == 0 || j%2 !=  0)
        cout << b[j];
    }
    cout << '\n';
  }
  return 0;
}
