#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0 ; i < n ; i++) 
    cin >> arr[i];
  int l,r;
  cin >> l >> r;
  for (int index = l-1 ; index <= r-1 ; index++){
    cout << arr[index] << ' ';
  }  
  cout << '\n';
  return 0;
}
