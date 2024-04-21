#include<bits/stdc++.h>

#define ll long long
using namespace std;
int n,m;
bool cmp(int a , int b)
{
    int diffa = abs((m+1) - a*2);
    int diffb = abs((m+1) - b*2);
    if ( diffa == diffb)
        return  a < b;
    else
        return diffa < diffb;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin >> n >> m;
    vector<int> baskets;
    for (int i = 0; i < m; ++i) {
        baskets.push_back(i+1);
    }
    sort(baskets.begin(),  baskets.end(), cmp);

    for (int i = 0; i < n; ++i) {
        cout << baskets[i%m] << endl;
    }
    return 0;
}