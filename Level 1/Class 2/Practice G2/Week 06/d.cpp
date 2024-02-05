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

    int songs, space;
    cin >> songs >> space;
    long long before, after;
    int dif[songs];
    long long sumBefore = 0, sumAfter = 0;
    for (int i = 0; i < songs; ++i) {
        cin >> before >> after;
        sumBefore += before;
        sumAfter += after;
        dif[i] = before - after;
    }

    if(sumBefore <= space){
        cout << 0;
    }
    else if(sumAfter > space){
        cout << -1;
    }
    else{
        sort(dif, dif + songs);
        reverse(dif, dif + songs);

        int cntCompressed = 0;
        for (int i = 0; i < songs; ++i) {
            sumBefore -= dif[i];
            cntCompressed++;
            if(sumBefore <= space){
                break;
            }
        }
        cout << cntCompressed;
    }

}
