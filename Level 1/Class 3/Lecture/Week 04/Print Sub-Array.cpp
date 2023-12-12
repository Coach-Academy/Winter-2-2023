#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int l, r;
    cin >> l >> r;
    l--, r--; // to make it 0-based
    
    for(int i = l; i <= r; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}