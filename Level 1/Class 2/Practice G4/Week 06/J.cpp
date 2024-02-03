#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin  >> n;
    int p[n] , q[n];
    for (int i = 0; i < n; ++i) {
        cin  >> p[i];
    }
    for (int i = 0; i < n; ++i) {
        cin  >> q[i];
    }
    int org[n];
    for (int i = 0; i < n; ++i) {
        org[i] = i+1;
    }
    int index  = 0, a= 0 , b =0;
    do{
        bool ok1 = 1 ;
        bool ok2 = 1 ;
        for (int i = 0; i < n; ++i) {
            if ( org[i] != p[i])
                ok1 = 0;

            if ( org[i] != q[i])
                ok2 = 0;
        }
        if ( ok1)
             a = index;
        if ( ok2 )
             b = index;
        index++;
    }while(next_permutation(org, org+n));
    cout << abs(a-b) << endl;
    return 0;
}