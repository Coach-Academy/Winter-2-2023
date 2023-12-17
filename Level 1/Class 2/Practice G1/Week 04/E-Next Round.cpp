#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, next = 0;
    cin >> n >> k;
    int scors[n];
    for (int i = 0; i < n; ++i) {
        cin >> scors[i];
    }
    k--;
    for (int i = 0; i < n; ++i) {
        if(scors[i] >= scors[k] and scors[i] != 0 )
            next++;
    }
    cout << next;
}