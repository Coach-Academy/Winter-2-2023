#include <iostream>
using namespace std;
int main()
{
  int n,x=0;
  cin >> n;
  for (int i = 1 ; i <= n ; i++){
    string s;
    cin >> s;
    if (s[0] == '+' || s[2] == '+')
      x++;
    else 
      x--;
  }
  cout << x << '\n';
  return 0;
}
