#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int day , month;
  cin >> month >> day;  
  if (day < month) 
    cout << month-1 << '\n';
  else 
    cout << month << '\n';  
  return 0;
}
