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
    priority_queue<int , vector<int> , greater<int>> pq;
    ll sum  =0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sum += x;
        pq.push(x);
        if ( sum < 0)
        {
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << pq.size() << endl;

    return 0;
}