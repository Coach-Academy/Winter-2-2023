#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n; ++i) {
        if ( v[i].second < v[i-1].second)
        {
            cout << "Happy Alex\n";
            return 0;
        }
    }
    cout << "Poor Alex\n";
    return 0;
}