#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cntFromBack = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '0')cntFromBack++;
        else break;
    }
    string inc(cntFromBack, '0');
    s = inc + s;
    string revS = s;
    reverse(revS.begin(), revS.end());
    if (s == revS)cout << "Yes";
    else cout << "No";
    return 0;
}