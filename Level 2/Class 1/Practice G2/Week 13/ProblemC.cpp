#include <bits/stdc++.h>
#define el '\n'
using namespace std;
void fast ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int N = 1e6+1 ;
int main()
{
    fast ();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m ;
        map<int, int > mp;
        for (int i=0, x ; i<n; i++)
        {
            cin >> x ;
            mp[x%m]++;
        }
        int ans = 0;
        for (auto i : mp)
        {
            if (i.first == 0)
                ans++;
            else if (i.first * 2 == m)
                ans++;
            else if (mp.find(m-i.first)== mp.end() || i.first * 2 < m ){
                int x = i.second , y = mp[m - i.first];
                ans += max (0 , abs (x - y) - 1) + 1;
            }

        }
        cout << ans << el;
    }

}
