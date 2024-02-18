#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a, b, c;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if(x > 0) a.push_back(x);
        else if(x < 0) b.push_back(x);
        else c.push_back(x);
    }

    if(a.empty())
    {
        for (int i = 0; i < 2; ++i) {
            a.push_back(b.back());
            b.pop_back();
        }
    }

    if(b.size() %  2 == 0)
    {
        c.push_back(b.back());
        b.pop_back();
    }

    cout << b.size() << ' ';
    for(auto &i : b)
        cout << i << ' ';
    cout << '\n';
    cout << a.size() << ' ';
    for(auto &i : a)
        cout << i << ' ';
    cout << '\n';
    cout << c.size() << ' ';
    for(auto &i : c)
        cout << i << ' ';

}