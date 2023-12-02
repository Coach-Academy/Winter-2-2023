#include <iostream>

using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;
    int ans = a-1;
    if( b >= a)
        ans++;
    cout << ans;
}