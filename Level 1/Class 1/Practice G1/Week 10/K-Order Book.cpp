#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s, temp;
    cin >> n >> s;

    map<pair<char, int>, int> sell, buy;
    while (n--)
    {
        char d;
        int p, v;
        cin >> d >> p >> v;
        if(d == 'S') sell[{d, p}] += v;
        else buy[{d, p}] += v;
    }
    temp = s;
    vector<pair<int, int>> ans;

    while (temp-- and sell.size())
    {
        auto start = sell.begin();
        ans.push_back({start->first.second, start->second});
        sell.erase(start);
    }
    for (int i = ans.size() - 1; i >= 0; --i)
    {
        cout << "S " << ans[i].first << ' '<< ans[i].second << '\n';
    }

    while (s-- and buy.size())
    {
        auto start = prev(buy.end());
        cout <<  "B " << start->first.second << ' ' << start->second << '\n';
        buy.erase(start);
    }

}