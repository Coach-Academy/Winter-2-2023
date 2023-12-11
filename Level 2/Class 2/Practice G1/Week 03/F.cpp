#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
map<int,int> f , fof ;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--)
    {
        int op , x;
        cin >> op >> x;
        if ( op == 1)
        {
            fof[ f[x] ]--;

            f[x]++;

            fof [ f[x] ] ++;
        }
        else if ( op == 2)
        {
            if ( f[x] > 0)
            {
                fof[ f[x] ]--;

                f[x]--;

                fof [ f[x] ] ++;
            }
        }
        else
        {
            if ( fof [ x ] > 0)
                cout << 1  << endl;
            else
                cout << 0 << endl;
        }
    }
    return 0;
}