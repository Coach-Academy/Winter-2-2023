#include <bits/stdc++.h>
using namespace std;
#define ll long long
void print(vector<int>x){
    cout<<x.size()<<' ';
    for(auto it:x)cout<<it<<' ';
    cout<<'\n';
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, num;
        cin >> n;
        vector<int> neg, pos, zero;
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (num > 0) {
                pos.push_back(num);
            } else if (num < 0) {
                neg.push_back(num);
            } else {
                zero.push_back(0);
            }
        }
        if (pos.empty()) {
            pos.push_back(neg.back());
            neg.pop_back();
            pos.push_back(neg.back());
            neg.pop_back();
        }
        if (neg.size() % 2 == 0) {
            zero.push_back(neg.back());
            neg.pop_back();
        }
        print(neg);
        print(pos);
        print(zero);
    }
}