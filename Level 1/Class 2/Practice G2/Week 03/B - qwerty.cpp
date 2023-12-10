#include <iostream>
using namespace std;
int main()
{
  
  for (int i = 1 ; i <= 26 ; i++){
    int x;
    cin >> x;
    char ans = 'a' + (x-1);
    cout << ans;
  }
  return 0;
}
