#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> a(n);
    for (auto &i: a)
        cin >> i;
    int pos = -1, anss = 1e9;
    for (int i = 0; i < n; ++i) {
        if(s[i] == 'R')
            pos = a[i];
        else if(s[i] == 'L' and pos != -1)
            anss = min(anss, a[i] - ((pos + a[i]) / 2));
    }
    if(anss == 1e9)
        cout << -1;
    else
        cout << anss;
}