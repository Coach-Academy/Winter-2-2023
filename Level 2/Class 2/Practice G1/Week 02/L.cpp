#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
vector<string> v;
priority_queue<int , vector<int> , greater<int>> pq;
void insert( int x)
{
    string s = "insert ";
    s += to_string(x);
    v.push_back(s);
    pq.push(x);
}

void rem()
{
    string s = "removeMin";
    pq.pop();
    v.push_back(s);
}

void getmin(int x)
{
    string s = "getMin ";
    s+= to_string(x);
    v.push_back(s);
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if ( s == "getMin")
        {
            int x;
            cin >> x;
            while (pq.size() && pq.top() < x)
                rem();
            if ( pq.empty() || pq.top() > x)
                insert(x);

            getmin(x);
        }
        else if (s == "removeMin")
        {
            if (pq.empty())
                insert(0);

            rem();
        }
        else
        {
            int x;
            cin >> x;
            insert(x);
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }
    return 0;
}