#include<bits/stdc++.h>

#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> dq(n);
        for (int i = 0; i < n; ++i) {
            cin >> dq[i];
        }
        sort( dq.begin(),  dq.end());
        ll sumred = 0 , sumblue =0 , cred = 0 , cblue =0;
        while ( dq.size())
        {
            if ( sumred <= sumblue)
            {
                sumred += dq.back();
                dq.pop_back();
                cred++;
            }
            else if ( cblue <= cred)
            {
                sumblue += dq.front();
                dq.pop_front();
                cblue++;
            }
            else break;
        }
        if ( sumred > sumblue  && cred < cblue)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}