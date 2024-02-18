#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int m, n;
int a[20], curmx;
vector<int> fin, path;

void solve(int idx, int sum) {
    // base case
    if (idx == n) {
        if (sum <= m && sum > curmx) {
            curmx = sum;
            fin = path;
        }
        return;
    }
    // transition
        // take
        // do
        sum += a[idx];
        path.push_back(a[idx]);
        //recurse
        solve(idx + 1, sum);
        //undo
        sum -= a[idx];
        path.pop_back();
    // leave
        // do

        //recurse
         solve(idx+1 , sum);
        //undo

}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    while (cin >> m) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        fin.clear();
        path.clear();
        curmx = 0;
        // idx , sum
        solve(0, 0);
        for (int i = 0; i < fin.size(); ++i) {
            cout << fin[i] << " ";
        }
        cout << "sum:" << curmx <<endl;
    }
    return 0;
}