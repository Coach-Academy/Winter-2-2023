#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s == "RRR")
        cout << 3;
    else if(s == "SSS")
        cout << 0;
    else if(s == "RRS" || s == "SRR")
        cout << 2;
    else 
        cout << 1; // RSR SSR RSS RSR
}