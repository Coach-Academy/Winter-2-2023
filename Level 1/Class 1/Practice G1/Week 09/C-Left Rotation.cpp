#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long
int main() {
    int n, d;
    cin >> n>> d;
    queue<int> a;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.push(x);
    }

    while(d--)
    {
        a.push(a.front());
        a.pop();
    }

    while(!a.empty())
    {
        cout << a.front() << ' ';
        a.pop();
    }
}