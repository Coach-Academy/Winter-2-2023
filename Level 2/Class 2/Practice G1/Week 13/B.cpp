#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+1;
int p[N];

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int> primes;
    for (int i = 2; i < N; ++i) {
        if ( p[i] == 0) {
            primes.push_back(i);
            for (ll j = 1ll*i*i; j < N; j+=i) {
                p[j] = 1;
            }
        }
    }
    while (t--) {
        int d;
        cin >> d;
        int p1 = *lower_bound(primes.begin(), primes.end(), d+1);
        int p2 = *lower_bound(primes.begin(),  primes.end(), p1 + d);
        cout << 1ll * p1 * p2 << endl;
    }
    return 0;
}