#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    for(int i = 0; i < n; i++)
        cout << arr[i][i] << " ";
    cout << "\n";
    return 0;
}