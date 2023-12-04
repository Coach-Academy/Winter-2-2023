#include <iostream>
using namespace std;
int main()
{
  int w;
  cin >> w;
  if (w%2 != 0 || w == 2)
    cout << "NO\n";
  else
    cout << "YES\n";
  return 0;
}
