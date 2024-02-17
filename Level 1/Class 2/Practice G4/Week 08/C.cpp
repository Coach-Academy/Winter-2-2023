#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
   int n;
   cin >> n;
   vector<int> v[3];
    for (int i = 0,x; i < n; ++i) {
        cin >> x;
        v[x-1].push_back(i+1);
    }
    int mn = min({v[0].size() , v[1].size() , v[2].size()});
    cout  << mn << endl;
    for (int i = 0; i < mn; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << v[j][i] << " ";
        }
        cout << endl;
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