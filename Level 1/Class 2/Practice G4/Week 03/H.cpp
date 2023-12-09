#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum =0,cnt=0 ,ans =0;
    for (int i = 1; i <= n; ++i) {
        cnt += i;
        sum += cnt;
        if (sum <= n)
            ans = i;
        else
            break;
    }
    cout << ans << endl;
}