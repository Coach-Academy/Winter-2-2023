#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        deque<int> de;
        int q, num;
        bool rev = 0;
        cin >> q;
        string ch;
        while (q--) {
            cin >> ch;
            if (ch == "toFront") {
                cin >> num;
                if (rev) {
                    de.push_back(num);
                } else {
                    de.push_front(num);
                }
            } else if (ch == "push_back") {
                cin >> num;
                if (!rev) {
                    de.push_back(num);
                } else {
                    de.push_front(num);
                }
            } else if (ch == "back") {
                if (de.empty()) {
                    cout << "No job for Ada?" << '\n';
                    continue;
                }
                if (!rev) {
                    cout<<de.back()<<'\n';
                    de.pop_back();
                } else {
                    cout<<de.front()<<'\n';
                    de.pop_front();
                }
            } else if (ch == "front") {
                if (de.empty()) {
                    cout << "No job for Ada?" << '\n';
                    continue;
                }
                if (rev) {
                    cout<<de.back()<<'\n';
                    de.pop_back();
                } else {
                    cout<<de.front()<<'\n';
                    de.pop_front();
                }
            } else {
                rev = 1 - rev;
            }
        }
    }
}