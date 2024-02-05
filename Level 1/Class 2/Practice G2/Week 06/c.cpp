// TopCoders
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int x;
    bool hasOne = false;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if(x == 1){
            hasOne = true;
        }
    }

    cout << (hasOne ? "-1" : "1" );
}
