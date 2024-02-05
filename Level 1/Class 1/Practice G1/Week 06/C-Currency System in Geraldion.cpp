#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) 
    {
        cin >> x;
        if(x == 1)
            return cout << -1, 0;
    }
    cout << 1;
}
