#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int wires[n+2] ={0};
  for (int i = 1 ; i <= n ; i++){
    cin >> wires[i];
  }
  int shots;
  cin >> shots;
  for (int i = 0 ; i < shots ; i++){
    int x,y;
    cin >> x >> y;
    wires[x-1] +=( y-1);
    wires[x+1] += (wires[x]-y);
    wires[x] = 0;
  }
  for (int i = 1 ; i <= n ; i++)
    cout << wires[i] << '\n';
  return 0;
}
