#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork()
{
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    pair<int,int> pref[n+2],suff[n+2];
    int a[n+2];
    for (int i = 0; i <= n+1 ; ++i) {
        a[i] = 0;
        pref[i] = suff[i] = {};
    }
    for (int i = 1; i <= n; ++i) {
        if ( s[i-1] == '-')
        {
            a[i] = a[i-1] -1;
        }
        else
            a[i] = a[i-1] +1;
    }
    for (int i = 1; i <= n; ++i) {
        pref[i].first = min(a[i] , pref[i - 1].first);

        pref[i].second = max(a[i], pref[i - 1].second);
    }
    for (int i = n ; i >= 1 ; --i) {
        if ( s[i-1] == '-')
        {
            suff[i].first = min(0 , suff[i+1].first -1);
            suff[i].second = max(0, suff[i+1].second -1);
        }
        else
        {
            suff[i].first = min(0 , suff[i+1].first +1);
            suff[i].second = max(0, suff[i+1].second +1);
        }

    }
    while (m--)
    {
        int l , r;
        cin >> l >> r;
        l--;
        r++;
        int prefmin  = pref[l].first , prefmx = pref[l].second;
        int suffmin = suff[r].first +a[l] , suffmx = suff[r].second + a[l];
        int mn   = min( prefmin, suffmin);
        int mx   = max(prefmx , suffmx);
        cout << mx -  mn+1 << endl;

    }


}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        doWork();

    return 0;
}