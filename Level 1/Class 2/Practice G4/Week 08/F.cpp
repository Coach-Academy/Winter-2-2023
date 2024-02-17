#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    queue<int> q;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        q.push(i);
    }
    while (q.size() > 1)
    {
         int student = q.front();
         q.pop();
         v[student] -= m;
         if (v[student] > 0)
         {
             q.push(student);
         }
    }
    cout << q.front()+1 << endl;
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