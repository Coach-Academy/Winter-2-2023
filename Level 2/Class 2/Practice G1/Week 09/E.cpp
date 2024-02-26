#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll ans = LLONG_MAX;
    for (int i = 2; i <= 10 ; i+=2) {
        for (int msk = 0; msk < ( 1 << i) ; ++msk) {
            int zeros = 0 , ones = 0;
            ll num =0 ;
            for (int j = 0; j < i; ++j) {
                if ( (1 << j) & msk)
                    num *= 10 , num +=7 , ones++;
                else
                    num *= 10 , num+=4 , zeros++;
            }
            if ( ones == zeros && num >= n)
            {
                ans = min( ans ,  num);
            }
        }
    }
    cout << ans << endl;

    return 0;
}