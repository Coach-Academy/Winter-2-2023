#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans =0, cur =0;
    for (int i = 0; i < n; ++i) {
        int in , out ;
        cin >> out >> in ;
        cur -= out ;
        cur += in;
        ans = max( ans , cur);
    }
    cout << ans << endl;
    return 0;
}