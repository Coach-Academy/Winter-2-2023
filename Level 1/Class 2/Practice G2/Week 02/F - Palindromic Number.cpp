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
