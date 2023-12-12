#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    int arr[n]; // 0 1 2 3 ... n - 1
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    // int / int => int
    // double / int => double
    // double / double => double

    cout << (1.0 * sum) / n << "\n";
    return 0;
}