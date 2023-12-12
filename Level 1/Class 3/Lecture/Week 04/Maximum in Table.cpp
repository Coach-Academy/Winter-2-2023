#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;

    int grid[n][n];

    // first row and first column are ones
    for(int i = 0; i < n; i++){
        // for first row
        grid[0][i] = 1;
        
        // for first column
        grid[i][0] = 1;
    }

    for(int i = 1; i < n; i++)
        for(int j = 1; j < n; j++)
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1];

    cout << grid[n - 1][n - 1] << "\n";
    return 0;
}