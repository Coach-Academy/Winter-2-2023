#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  long long n,k;
  cin >> n >> k;
  long long tp = ceil(n/2.0);
  if (k <= tp)
    cout << 2*k-1 << '\n';
  else
    cout << 2 * (k-tp) << '\n';
  return 0;
}
