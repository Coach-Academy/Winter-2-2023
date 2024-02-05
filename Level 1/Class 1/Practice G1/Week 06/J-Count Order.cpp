#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int a[n], b[n], orginal[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    for (int i = 1; i <= n; ++i) {
        orginal[i - 1] = i;
    }
    int apos, bpos, pos = 0;
    do {
        pos++;
        int c = 0, d = 0;
        for (int i = 0; i < n; ++i)
            if(orginal[i] == a[i])
                c++;

        if(c == n)
            apos = pos;

        for (int i = 0; i < n; ++i)
            if(orginal[i] == b[i])
                d++;

        if(d == n)
            bpos = pos;

    }while(next_permutation(orginal, orginal + n));

    cout << abs(apos - bpos);
}
