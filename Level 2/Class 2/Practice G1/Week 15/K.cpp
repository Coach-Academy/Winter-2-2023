#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
    int n;
    cin >> n;
    map<int, vector<int>> c;
    for (int i = 0; i < n; ++i) {
        int a, x;
        cin >> a >> x;
        c[x].push_back(a);
    }
    for(auto &[color , vec] : c)
    {
        if (is_sorted(vec.begin(),  vec.end()))
            continue;
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
        doWork();
    return 0;
}