#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
    int n;
    cin >> n;
    vector<char> v(n);
    int idx = -1 , mx =0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if ( v[i] == 'A')
            idx = i;
        else
        {
            if ( idx == -1)
                continue;
            else
                mx = max( mx , i-idx);
        }
    }
    cout << mx << endl;
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