#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long odd = n / 2 + (n % 2);
    if(k <= odd)
    {
        cout << k * 2 - 1;
    }
    else
    {
        cout << (k - odd) * 2;
    }
}