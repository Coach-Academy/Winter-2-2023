#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int t ,n;
int a[20];
vector<int>path;
set<vector<int>> s;
void solve( int idx , int sum)
{
    if ( idx == n)
    {
        if ( sum == t)
        {
            s.insert(path);
        }
        return;
    }

    // take
       // do
        path.push_back(a[idx]);
       //recurse
       solve(idx+1 , sum + a[idx]);
       //undo
        path.pop_back();
    // leave
    solve(idx+1 , sum );
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    while (cin >> t)
    {
        cin >> n;
        if (!n)
            break;
        for (int i = 0; i < n; ++i) {
            cin  >> a[i];
        }
        s.clear();
        sort(a,a+n);
        reverse(a,a+n);
        solve(0,0);
        cout << "Sums of "<<t << ":" << endl;
        if (s.empty())
            cout << "NONE\n";
        else
        {
            auto it = s.rbegin();
            while (it != s.rend())
            {
                for (int i = 0; i < (*it).size()-1; ++i) {
                    cout << (*it)[i] << "+";
                }
                cout  << (*it).back() << endl;
                it++;
            }
        }
    }
    return 0;
}