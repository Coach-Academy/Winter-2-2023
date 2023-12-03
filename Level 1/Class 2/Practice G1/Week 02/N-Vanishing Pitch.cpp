#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, t, s, d;
    cin  >> v >> t >> s >> d ;
    if(d >= v * t and d <= v * s) cout << "No";
    else cout << "Yes";
}