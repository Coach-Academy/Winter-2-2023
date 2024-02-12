#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    swap(a, b);
    swap(a, c);
    cout << a << ' ' << b << ' ' << c;
}