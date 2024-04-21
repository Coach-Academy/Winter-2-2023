#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for( int i = 2; 1ll *i*i <= n ;i++)
        {
            if ( n% i == 0)
            {
                while (n%i == 0)
                    n/=i;

                if ( n == 1)
                {
                    cout << i << endl;
                    return 0;
                }
                else
                {
                    cout << 1 << endl;
                    return 0;
                }
            }
        }
        cout << n << endl;
    }
    return 0;
}