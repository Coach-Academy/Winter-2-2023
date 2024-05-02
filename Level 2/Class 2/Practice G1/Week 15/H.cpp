#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
    int n;
    cin >> n;
    cout << 3*n*n / 4 << endl;
    for (int i = 0; i < n; i+=2) {
        for (int j = 0; j < n; j+=2) {
            cout << 1 << " " << i+1 << " " << j+2 << " " << 2 << endl;
            cout << 1 << " " << i+2 << " " << j+1 << " " << 2 << endl;
            cout << 2 << " " << i+1 << " " << j+1 << " " << 1 << endl;

        }
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