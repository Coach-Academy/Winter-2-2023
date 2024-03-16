#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int n;
int a[100000];
int solve( int i)
{
    if ( i == n)
        return 0;

    int b;
    cin >>b;
    return (a[i]*b + solve(i+1));
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << (solve(0)==0 ? "Yes" : "No");
    return 0;
}