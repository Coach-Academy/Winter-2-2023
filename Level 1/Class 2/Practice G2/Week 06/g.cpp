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

    int students, puzzles;
    cin >> students >> puzzles;
    int arr[puzzles];
    for (int i = 0; i < puzzles; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + puzzles);
    int mnDif = arr[students - 1] - arr[0];

    for (int i = 1; i <= puzzles - students; ++i) {
        int curDif = arr[i + students - 1] - arr[i];
        if(curDif < mnDif){
            mnDif = curDif;
        }
    }

    cout << mnDif;
}
