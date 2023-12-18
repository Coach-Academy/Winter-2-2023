#include <bits/stdc++.h>
using namespace std;
int main()
{
  int press[3][3];
  int state[3][3];
  for (int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j++){
      cin >> press[i][j];
    }
  }
  for (int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j++){
      state[i][j] = 1;
    }
  } 
  for (int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j++){
      if (press[i][j] % 2 != 0){
        // inline if
        // i,j
        state[i][j] = (state[i][j] == 0) ? 1 : 0;
        // i,j-1
        if (j > 0)
          state[i][j-1] = (state[i][j-1] == 0) ? 1 : 0;
        // i ,j+1
        if (j < 2)  
          state[i][j+1] = (state[i][j+1] == 0) ? 1 : 0;
        // i-1 ,j
        if (i > 0)  
          state[i-1][j] = (state[i-1][j] == 0) ? 1 : 0;
        // i+1 ,j
        if (i < 2)  
          state[i+1][j] = (state[i+1][j] == 0) ? 1 : 0;
  
      }
    }
    
  }
  for (int i = 0 ; i < 3 ; i++){
      for (int j = 0 ; j < 3 ; j++){
        cout << state[i][j];
      }
      cout << '\n';
    }
  return 0;
}
