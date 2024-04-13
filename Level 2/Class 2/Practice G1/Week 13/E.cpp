#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
     int t;
     cin >> t ;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> dq(n,0);
        dq[0] = dq[1] = 1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << dq[j] << " ";
            }
            cout << endl;
            dq.push_front(dq.back());
            dq.pop_back();
        }

    }
    return 0;
}