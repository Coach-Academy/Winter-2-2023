#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    for (int i = 0; a[i]; i++) {
        char mn = min(a[i], char('9' - a[i] + '0'));
        if (mn == '0' && i == 0)mn = a[i];
        cout << mn;
    }
    return 0;
}
