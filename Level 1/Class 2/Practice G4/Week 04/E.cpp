#include<bits/stdc++.h>


using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    k--;
    int cnt  =0;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        if ( a[i] > 0 && a[i]>= a[k])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}