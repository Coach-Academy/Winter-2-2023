#include <iostream>
using namespace std;
int main()
{
  int n,ans=0;
  cin >> n;
  for (int i = 1 ; i <= n ; i++){
    int a,b;
    cin >> a >> b;
    if (b-a >= 2)
      ans++;
  }
  cout << ans << '\n';
  return 0;
}
