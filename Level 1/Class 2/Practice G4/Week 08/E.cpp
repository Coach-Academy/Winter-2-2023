#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
    int n;
    cin >> n;
    vector<int> ans,v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i) {
        if ( v[i] == 1)
            ans.push_back(v[i]);
        else
         ans.back()++;
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] <<  " ";
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