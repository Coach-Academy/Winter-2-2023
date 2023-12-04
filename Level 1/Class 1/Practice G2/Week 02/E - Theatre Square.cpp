#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,m,a;
  cin >> n >> m >> a;
  long long tp1 = ceil(n/(a*1.0));
  long long tp2 = ceil(m/(a*1.0));
  cout <<  tp1*tp2  << '\n';
  return 0;
}
