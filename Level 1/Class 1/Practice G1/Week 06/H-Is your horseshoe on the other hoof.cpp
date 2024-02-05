#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 4; ++i) {
        cin >> a[i];
    }
    sort(a, a + 4);
    int dis = unique(a, a + 4) - a;
    cout << 4 - dis;
}
