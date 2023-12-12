#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];

        int ones = count(arr, arr + n, 1);
        int twos = count(arr, arr + n, 2);
        int threes = count(arr, arr + n, 3);
        int fours = count(arr, arr + n, 4);

        int taxis = fours; // each 4 people can take a taxi
        
        taxis += threes; // 3 + 1
        ones -= threes;
        if(ones < 0) ones = 0;

        taxis += twos / 2; // 2 + 2
        twos %= 2;

        int remain_people = ones + twos * 2;        
        taxis += ceil(1.0 * remain_people / 4); 
    
        cout << taxis << "\n";
    }
    return 0;
}