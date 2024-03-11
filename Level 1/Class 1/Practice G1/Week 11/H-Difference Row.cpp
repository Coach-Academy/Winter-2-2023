#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    swap(a[0], a[ n -1]);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
}