#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        deque<int> gifts(n);
        vector<int> person(k);
        for (int i = 0; i < n; ++i) {
            cin >> gifts[i];
        }
        for (int i = 0; i < k; ++i) {
            cin >> person[i];
        }
        sort(gifts.begin(), gifts.end());
        sort(person.rbegin(), person.rend());
        ll ans = 0;
        while (person.size() && person.back() == 1) {
            ans += 2 * gifts.back();
            gifts.pop_back();
            person.pop_back();
        }
        for (int i = 0; i < person.size(); ++i) {
            ans += gifts.back();
            gifts.pop_back();
            ans += gifts.front();
            gifts.pop_front();
            person[i] -= 2;
            while (person[i]--)
                gifts.pop_front();
        }
        cout << ans << endl;
    }
    
    return 0;
}