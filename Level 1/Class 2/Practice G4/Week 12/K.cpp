#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int solve( int day , int n)
{
    if (day >= n)
        return day;


    // transition
    return solve(day+1 ,  n-day);
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << solve(1, n);

    return 0;
}