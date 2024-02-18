#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    deque<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    while(d--)
    {
        a.push_back(a.front());
        a.pop_front();
    }
    for(auto ele : a)
        cout << ele << ' ';

}