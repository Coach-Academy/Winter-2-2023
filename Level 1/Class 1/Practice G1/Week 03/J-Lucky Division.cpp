#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if(n % i == 0)
        {
            int x = i;
            bool notlucky = false;
            while(x)
            {
                if(x % 10 != 4 and x % 10 != 7)
                {
                    notlucky = true;
                    break;
                }
                x /= 10;
            }
            if(!notlucky)
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
}