#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
   int n ,d;
   cin >> n >> d;
   deque<int> dq(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }
    while (d--)
    {
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for (int i = 0; i < n; ++i) {
        cout << dq[i] << " ";
    }

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