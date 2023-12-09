#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt =0;
    for (int i = 1; i <=  n; ++i) {
        if ( n%i == 0) // i is a divisor of n
        {
            int cur = i;
            bool lucky = 1;
            while (cur > 0)
            {
                int rem = cur%10;
                cur /=10;
                if ( rem == 4  || rem == 7)
                    continue;
                else
                {
                    lucky = 0;
                    break;
                }
            }
            if ( lucky)
                cnt++;
        }
    }
    if (  cnt > 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}