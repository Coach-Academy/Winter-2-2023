#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum =0;
        for (int i = 0,x; i < n; ++i) {
            cin >> x;
            sum += abs(x);
        }
        cout << sum << endl;

    }

    return 0;
}