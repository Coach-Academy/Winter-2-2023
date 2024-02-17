#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
    int n;
    cin >> n;
    vector<int> v(n) , pos(n+1);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        pos[ v[i] ] = i;
    }
    int mx = n;
    while (mx)
    {
        int index = pos[mx],cnt=0;
        for (int i = index ; i < v.size(); ++i) {
            cout << v[i] << " ";
            cnt++;
        }
        while (cnt--)
            v.pop_back();
        mx--;
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