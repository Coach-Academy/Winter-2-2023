#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int a,b,c;
  cin >> a >> b >> c;
  if (c == 0){
    if (a > b)
      cout << "Takahashi\n";
    else 
      // a == b   a < b
      cout << "Aoki\n";  
  }   
  else{
    if (b > a) 
      cout << "Aoki\n";
    else
      // b == a  b < a
      cout << "Takahashi\n";    
  }
  return 0;
}
