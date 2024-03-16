#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
string s;
bool solve( int idx)
{
    // base case
    if (idx == s.size())
        return 1;
    
    char c = s[idx];
    c = toupper(c);
    
    if ((c == s[idx])  ==  (idx%2==1))
        return solve(idx+1);

    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin >> s;
    bool ans = solve(0);
    cout << (ans ? "Yes" : "No");
    return 0;
}