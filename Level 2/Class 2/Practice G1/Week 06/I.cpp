#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
    int n;
    cin >> n;
    string s,t="";
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if (i == 0)
            t+='1';
        else if ( s[i-1]+t[i-1] == s[i]+'1')
            t+='0';
        else
            t+='1';
    }
    cout  << t << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}