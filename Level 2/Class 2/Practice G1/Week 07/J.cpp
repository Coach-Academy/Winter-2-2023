#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+7;
int n,k;
double a[N] ;
long double stations[3];
bool can( long double x) {

    long double lst = 0;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if ( a[i] > lst)
        {
            if ( cnt == 3)
                return 0;
            stations[cnt++] = a[i] + x;
            lst = a[i]  + x*2;
        }
    }
    return 1;
}
void doWork()
{
    cin >> n ;
    for (int i = 0,x; i < n; ++i) {
        cin >> x;
        a[i] = x;
    }
    sort(a,a+n);
    long double  st = 0, end = 1e9, best = 1e9;
    int cnt = 100;
    while (cnt--)
    {
        long double mid = (st+end)/2;
        if ( can(mid))
            end = mid , best = mid;
        else
            st = mid ;
    }
    can(best);
    cout << fixed << setprecision(6) << best << endl;
    for (int i = 0; i < 3; ++i) {
        cout  << fixed << setprecision(6) << stations[i] << " ";
    }

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
   //  cin >> t;
    while (t--)
    {
        doWork();
    }

    return 0;
}