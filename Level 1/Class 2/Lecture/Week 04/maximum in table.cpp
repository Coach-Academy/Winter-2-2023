#include <bits/stdc++.h>
int arr[11][11];
using namespace std;
int main()
{
 int n;
 cin >> n;
 for(int row = 0 ; row < n ; row++){
    for(int col = 0 ; col < n ; col++){
        if(row == 0 || col == 0)
            arr[row][col] = 1;
        else
            arr[row][col] = arr[row][col-1] + arr[row-1][col];
    }

 }
     cout << arr[n-1][n-1] << endl;

}
