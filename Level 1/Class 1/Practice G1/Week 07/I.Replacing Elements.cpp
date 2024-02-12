#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, d;
        cin >> n >> d;
        int arr[n];
        bool f = true;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if(arr[i] > d)
                f = false;
        }
        if(f)
        {
            cout << "YES\n";
            continue;
        }
        sort(arr, arr + n);
        if(arr[0] + arr[1] <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

}