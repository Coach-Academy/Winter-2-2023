#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, temp;
    cin >> s;
    while(s.back() == '0')
        s.pop_back();
    temp = s;
    reverse(temp.begin(),temp.end());
    if(temp == s)
        cout << "Yes";
    else 
        cout << "No";
}