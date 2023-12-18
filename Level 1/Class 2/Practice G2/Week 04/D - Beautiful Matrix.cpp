#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5][5];
  int i,j;
  for (int row = 0 ; row < 5 ; row++){
    for (int col = 0 ; col < 5 ; col++){
      cin >> arr[row][col];
      if (arr[row][col] == 1){
        i = row;
        j = col;
      }
    }
  }
  cout << abs(2-i) + abs(2-j);
  
  return 0;
}
