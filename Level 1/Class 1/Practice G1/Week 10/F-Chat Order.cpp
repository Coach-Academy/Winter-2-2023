#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    map<string, int> st;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if(st[a[i]] == 0)
        {
            cout << a[i] << '\n';
            st[a[i]] = 1;
        }
    }
}