#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 26; ++i) {
         int x;
         cin >> x;
         char c = 'a'+x-1;
         cout << c;
    }
}
