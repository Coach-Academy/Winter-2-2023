#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;
    string s , news="";
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if ( news.empty() || news.back()!= s[i])
            news+=s[i];
    }
    cout << s.size() - news.size() << endl;
    return 0;
}