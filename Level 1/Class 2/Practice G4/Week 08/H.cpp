#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; ++i) {
        cin  >> dq[i];
    }
    int mx = n , cnt =0;
    vector<int> ans(n+1 , 0);
    while (dq.size())
    {
        if ( dq.back() == mx)
        {
            ans[mx] = cnt;
            cnt =0;
            dq.pop_back();
            mx--;
        }
        else {
            int front = dq.front();
            dq.push_back(front);
            dq.pop_front();
            cnt++;
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        doWork();
    return 0;
}
