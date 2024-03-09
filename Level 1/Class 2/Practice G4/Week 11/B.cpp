#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
   int a[3],b[3];
   int f = 0 ,s = 0;
    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < 3; ++i) {
        f += ( a[i] > b[i]);
        s += ( b[i] > a[i]);
    }
    cout << f << " " << s << endl;

    return 0;
}