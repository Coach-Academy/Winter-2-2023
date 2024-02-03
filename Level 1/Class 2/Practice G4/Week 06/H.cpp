#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int a[4];
    for (int i = 0; i < 4; ++i) {
        cin >> a[i];
    }
    int cnt = 1;
    sort(a,a+4);
    for (int i = 1; i < 4; ++i) {
        if ( a[i] != a[i-1])
            cnt++;
    }
    cout << 4-cnt << endl;

    return 0;
}