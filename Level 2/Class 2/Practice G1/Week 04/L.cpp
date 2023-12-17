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
    deque<int> dq(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }
    sort(dq.begin(),  dq.end());
    for (int i = 1; i <= n; ++i) {
        if ( i%2)
            cout << dq.front() << " " , dq.pop_front();
        else
            cout << dq.back() << " " , dq.pop_back();
    }
    return 0;
}