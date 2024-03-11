#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, B = 0, C = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if(x <= 0) C += x;
        else B += x;
    }
    cout << B - C;
}