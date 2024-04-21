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
bool prime [N] ;
vector<long long> v ;
void seive ()
{
    prime [0] = prime [1] = 0 ;

    for (long long i = 2; i< N ; i++)
    {
        if (prime[i])
        {
            v.push_back(i);
            for (long long j = i*i ; j < N ; j+= i)
                prime[j] = 0;
        }
    }
}
int main()
{
    fast ();
    memset(prime, 1, sizeof prime );
    seive () ;

    int t;
    cin >> t;
    while (t--){
        int d;
        cin >> d;
        long long x = *lower_bound(v.begin() , v.end() , 1+d);
        long long y = *lower_bound(v.begin() , v.end() , x+d);

        cout << x * y <<  el;


    }

}
