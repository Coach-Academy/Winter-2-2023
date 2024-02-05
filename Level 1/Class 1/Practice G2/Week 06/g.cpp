// TopCoders
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int student , puzzle;
    cin >> student >> puzzle;
    int puzzlesArray[puzzle];

    for (int i = 0; i < puzzle; ++i) {
        cin >> puzzlesArray[i];
    }

    sort(puzzlesArray , puzzlesArray + puzzle);

    int mn = puzzlesArray[student - 1] - puzzlesArray[0];

    for (int i = 1; i <= puzzle - student; ++i) {
        int lastPuzzle = puzzlesArray[i + student - 1];
        int firstPuzzle = puzzlesArray[i];

        int dif = lastPuzzle - firstPuzzle;
        if(dif < mn){
            mn = dif;
        }
    }

    cout << mn;
}
