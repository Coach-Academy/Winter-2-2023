#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, level = 0, totalcub = 0;
    cin >> n;
    while(totalcub <= n)
    {
        level++;
        for (int i = 1; i <= level; ++i) {
            totalcub += i;
        }

    }
    cout << level - 1;
}