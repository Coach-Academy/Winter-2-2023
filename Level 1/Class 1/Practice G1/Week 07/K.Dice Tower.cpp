#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if(a == x or b == x or 7 - a == x or 7 - b == x)
        {
            return cout << "NO", 0;
        }
    }
    cout << "YES";
}