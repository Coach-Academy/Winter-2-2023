#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = s.find('0');
    if(a != -1)
        s.erase(a, 1);
    else
        s.erase(0, 1);
    cout << s;
}