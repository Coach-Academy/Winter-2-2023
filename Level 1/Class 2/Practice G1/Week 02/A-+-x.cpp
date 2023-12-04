#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x = a + b, y = a - b, z = a * b;
    if(x >= y && x >= z)
        cout << x;
    else if(y >= x && y >= z)
        cout << y;
    else
        cout << z;

}