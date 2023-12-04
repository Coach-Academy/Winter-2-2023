#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
priority_queue<int , vector<int> , greater<int>> sorted;
queue<int> unsorted;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while ( n--)
    {
        int op;
        cin >>  op;
        if ( op == 1)
        {
             int x;
             cin >> x;
             unsorted.push(x);
        }
        else if ( op == 2)
        {
            // remove el minimum w print
            if ( sorted.size())
            {
                cout << sorted.top() <<"\n";
                sorted.pop();
            }
            else
            {
                cout << unsorted.front() << "\n";
                unsorted.pop();
            }
        }
        else if ( op == 3)
        {
            while (unsorted.size())
            {
                sorted.push(unsorted.front());
                unsorted.pop();
            }
        }
    }
    return 0;
}