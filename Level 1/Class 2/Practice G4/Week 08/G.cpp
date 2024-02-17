#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork() {
    int q;
    cin >> q;
    deque<int> dq;
    bool rev = 0;
    while (q--) {
        string s;
        cin >> s;
        if (s[0] =='b')
        {
            if ( dq.empty())
            {
                cout  <<"No job for Ada?\n";
            }
            else if ( rev)
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
            else
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if ( s[0] == 'f')
        {
            if ( dq.empty())
            {
                cout  <<"No job for Ada?\n";
            }
            else if ( rev)
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
            else
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if ( s[0] == 't')
        {
            int x;
            cin >> x;
            if ( rev)
            {
                dq.push_back(x);
            }
            else
                dq.push_front(x);
        }
        else if ( s[0] == 'p')
        {
            int x;
            cin >> x;
            if ( rev)
            {
                dq.push_front(x);
            }
            else
                dq.push_back(x);
        }
        else if ( s[0] == 'r')
            rev = !rev;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
        doWork();
    return 0;
}