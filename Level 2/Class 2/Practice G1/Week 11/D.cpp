#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
   int t;
   cin >> t;
    while (t--)
    {
         ll n;
         cin >> n;
         int a,b;
         cin >> a >> b;
         if ( a == 1)
         {
             if ( (n-1)%b == 0)
                 cout <<"Yes\n";
             else
                 cout << "No\n";
         }
         else
         {
             bool f = 0;
             ll ans = 1;
             while (ans <= n)
             {
                 int dif = (n- ans);
                 if ( dif%b == 0)
                 {
                     f = 1;
                     break;
                 }
                 ans *= a;
             }
             if ( f)
                 cout << "Yes\n";
             else
                 cout << "No\n";
         }
    }

    return 0;
}