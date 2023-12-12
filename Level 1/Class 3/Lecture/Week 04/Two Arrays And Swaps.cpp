#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int test_cases = 1;
    cin >> test_cases;
    while(test_cases--){
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        
        sort(a, a + n); // ascending
        sort(b, b + n, greater < int > ()); // descending
        
        for(int i = 0; i < k; i++)
            if(b[i] > a[i])
                swap(a[i], b[i]);

        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += a[i];

        cout << sum << "\n";
    }
    return 0;
}