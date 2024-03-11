#include <bits/stdc++.h>

using namespace std;

int main()
{
    int alice = 0, bobb = 0;
    vector<int> a(3), b(3);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    for (int i = 0; i < 3; ++i) {
        if(a[i] > b[i]) alice++;
        else if(a[i] < b[i]) bobb++;
    }
    cout << alice << ' ' << bobb;
}