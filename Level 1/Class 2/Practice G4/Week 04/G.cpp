#include<bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cin >> n;
    char lst[2] ={2,2};
    int cnt = 1;
    for (int i = 0; i < n; ++i) {
        char b[2];
        cin >> b[0] >> b[1];
        if ( b[0] == lst[1])
            cnt++;
        lst[0] = b[0];
        lst[1] = b[1];
    }
    cout << cnt << endl;
    return 0;
}