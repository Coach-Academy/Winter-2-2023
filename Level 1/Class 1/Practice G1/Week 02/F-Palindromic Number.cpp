#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, first;
    cin >> a;
    first = a % 10;
    a = a / 100;
    if(first == a)
        cout << "Yes";
    else
        cout << "No";

}