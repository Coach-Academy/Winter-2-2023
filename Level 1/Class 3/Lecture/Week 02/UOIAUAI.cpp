#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        cout << "vowel" << "\n";
    else
        cout << "consonant" << "\n";
    return 0;
}
