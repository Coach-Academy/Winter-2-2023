#include <iostream>
#include <string>

using namespace std;

int main(){
    int test_cases = 1;
    cin >> test_cases;
    while(test_cases--){
        string s;
        cin >> s;
        if(s.size() > 10)
            cout << s.front() << s.size() - 2 << s.back() << "\n";
        else
            cout << s << "\n";
    }
    return 0;
}