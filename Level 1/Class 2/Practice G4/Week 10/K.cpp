#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n , x;
    cin >> n >> x;
    map<int,int> buy , sell;
    for (int i = 0; i < n; ++i) {
        int p , v;
        char d;
        cin >> d >> p >> v;
        if ( d == 'B')
            buy[p] += v;
        else
            sell[p] += v;
    }
    vector<pair<int,int>> b , s;
    for( auto &[x,y] : buy)
        b.push_back({x,y});

    for( auto &[x,y] : sell)
        s.push_back({x,y});

    for (int i = min(x, (int)s.size())-1; i >=0  ; --i) {
        cout << "S " << s[i] .first << " " << s[i].second << endl;
    }
    sort(b.rbegin(),  b.rend());
    for (int i = 0; i < min(x, (int) b.size()); ++i) {
        cout << "B " << b[i].first << " " << b[i].second << endl;
    }




    return 0;
}