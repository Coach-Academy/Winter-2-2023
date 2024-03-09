#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
   string s;
   cin >> s;
   if ( s[0] == s[1] && s[1] == s[2])
       cout << "Won\n";
   else
       cout << "Lost\n";

    return 0;
}