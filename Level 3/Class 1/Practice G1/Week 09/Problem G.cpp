// G - G. Training Camp
#include <bits/stdc++.h>
using namespace std;

const int N = 18;

int n, tc = 1, deps[N], weights[N], dp[N][1 << N], visited[N][1 << N];

int solve(int day, int mask) {
    if (day == n)
        return 0;
    int &ans = dp[day][mask];
    if (visited[day][mask] == tc)
        return ans;
    visited[day][mask] = tc;
    ans = -1e9;
    for (int i = 0; i < n; ++i) {
        if (((mask >> i) & 1) or (deps[i] & mask) != deps[i])
            continue;
        ans = max(ans, (day + 1) * weights[i] + solve(day + 1, mask | (1 << i)));
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int TC; cin >> TC;
    for (; tc <= TC; ++tc) {
        int m; cin >> n >> m;
        map<string, pair<int, int>> mp;
        cin.ignore();
        for (int i = 0; i < n; ++i) {
            string topic;
            getline(cin, topic);
            int index = topic.rfind(' ');
            int weight = stoi(topic.substr(index + 1));
            mp[topic.substr(0, index)].first = weight;
        }
        int idx = 0;
        for (auto &[_, p] : mp) {
            p.second = idx;
            weights[idx] = p.first;
            ++idx;
        }
        for (string line; m--; ) {
            getline(cin, line);
            int index = line.find(" --> ");
            int dcy = mp.at(line.substr(0, index)).second;
            int dnt = mp.at(line.substr(index + 5)).second;
            deps[dnt] |= (1 << dcy);
        }
        cout << solve(0, 0) << '\n';
        for (int i = 0; i < n; ++i)
            deps[i] = 0;
    }   
    return 0;
}