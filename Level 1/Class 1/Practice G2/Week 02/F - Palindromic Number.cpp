#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int last = n%10 , first = n/100;
  if (first == last )
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}
