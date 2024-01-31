#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l, r;
    cin >> l >> r;
    for (int i = l - 1; i < r; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}