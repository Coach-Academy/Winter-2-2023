#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        string s;
        cin >> s;

        while(!s.empty() && s.back() == '0') // remove trilling zeros
            s.pop_back();

        string rev = s;
        reverse(rev.begin(), rev.end());

        // string = reverse => palindrome
        cout << (s == rev ? "Yes" : "No") << "\n";
    }
    return 0;
}