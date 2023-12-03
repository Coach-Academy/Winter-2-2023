#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b)
    {
        if(c == 0)
            cout << "Aoki";
        else
            cout << "Takahashi";
    }
    else
    {
        if(a > b)
            cout << "Takahashi";
        else
            cout << "Aoki";
    }
}