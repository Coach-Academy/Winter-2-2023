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

// Using Switch Case
#include<iostream>
using namespace std;
int main(){

    char alphabet; 
    cin >> alphabet;
    switch (alphabet) {
        
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "vowel" << endl;
            break;
            
        default:
            cout << "consonant" << endl; 
    }




    return 0;
}


