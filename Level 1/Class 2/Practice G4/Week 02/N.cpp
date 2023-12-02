#include <iostream>

using namespace std;

int main() {
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    t*=v;
    s*=v;
    if (d >= t && d<= s)
    {
        cout << "No";
    }
    else
        cout << "Yes";
}