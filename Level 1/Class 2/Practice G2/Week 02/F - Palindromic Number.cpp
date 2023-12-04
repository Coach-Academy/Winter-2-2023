#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int last = n%10;
  int first = n/100;
  if (last == first)
    cout << "Yes\n";
  else 
    cout << "No\n";  
  return 0;
}

// another solution 

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int rev = 0;
  int temp = n;
  // n = 12 , rev =  3
  rev *= 10;
  rev += (n%10);
  n /= 10;
// n = 1 , rev =  30+2 = 32
  rev *= 10;
  rev += (n%10);
  n /= 10;
// n =  0, rev =  30+2 = 321
  rev *= 10;
  rev += (n%10);
  n /= 10;
  
  n = temp;
  if (n == rev)
    cout << "Yes\n";
  else 
    cout << "No\n";  
  return 0;
}
