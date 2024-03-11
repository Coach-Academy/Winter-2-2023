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
          int n,k;
          string a,b;
          int freqa[30]={},freqb[30]={};
          cin  >> n >> k >> a >> b;
        for (int i = 0; i < n; ++i) {
            freqa[a[i] - 'a']++;
            freqb[b[i] - 'a']++;
        }
        bool f = 1;
        for (int i = 0; i < 26; ++i) {
            if (freqb[i] > freqa[i]) {
                f = 0;
                break;
            }
            int excess = freqa[i] - freqb[i];
            if (excess % k == 0)
                freqa[i + 1] += excess;
            else
            {
                f = 0;
                break;
            }

        }
        if (f == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}