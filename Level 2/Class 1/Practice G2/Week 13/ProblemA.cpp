#include <bits/stdc++.h>
#define el '\n'
using namespace std;
void fast ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast ();
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin >> n ;
        map <int , int > mp;
        for (int i=0 ; i < n ; i++){
            int x;
            cin >> x;
            mp[x%3]++;
        }

        int target = n / 3 , ans = 0;
        for (int i=0 ; i<= 2 ; i++){
              if (mp[i] > target){
                 mp[(i+1)%3] += mp[i] - target ;
                 ans+= mp[i] - target ;
                 mp[i] = target ;
              }
        }

        for (int i=0 ; i<= 2 ; i++){
              if (mp[i] > target){
                 mp[(i+1)%3] += mp[i] - target ;
                 ans+= mp[i] - target ;
                 mp[i] = target ;
              }
        }

        cout << ans << el;

    }

}
