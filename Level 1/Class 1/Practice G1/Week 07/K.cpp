#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
int arr[N];
int main() {

    int n , top;
    cin >> n >> top;
    int buttom = 7 - top ;
    bool ok = true;
    while (n--){
        int a , b;
        cin >> a >> b;
        if (a == top || a == buttom || b == top || b == buttom)
            ok = false;
    }
 if (ok)
     cout << "YES";
 else cout << "NO";
    return 0;
}
