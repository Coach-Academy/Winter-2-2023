#include<iostream>
using namespace std;
int main(){

    char alphabet;
    cin >> alphabet;
    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'o' || alphabet == 'i' || alphabet == 'u'){
        cout << "vowel" << endl;
    }
    else {
        cout << "consonant" << endl;
    }

    return 0;
}
