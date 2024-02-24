#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
priority_queue<int , vector<int>, greater<int>> pq;
vector<string> fin;
void insert( int x)
{
    string s= "insert " + to_string(x);
    fin.push_back(s);
    pq.push(x);
}
int getmin()
{
    return pq.top();
}
void removemin()
{
    string s = "removeMin";
    fin.push_back(s);
    pq.pop();
}
//insert x -> insert
//        removemin -> if heap is not empty -> remove
//if heap is empty -> insert , remove
//
//        getmin x-> if min > x or heap is empty-> insert , getmin
//if min == x -> getmin
//if min < x -> while min < x , remove min , case 1 or 2
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string op;
        int x;
        cin >> op;
        if (op == "insert")
        {
            cin >> x;
            insert(x);
        }
        else if ( op == "removeMin")
        {
            if ( pq.empty())
                insert(0);
            removemin();
        }
        else
        {
            cin >> x;
            while (pq.size() && getmin()<x)
                removemin();

            if (pq.empty() || getmin()>x)
                insert(x);

            string s = "getMin "+ to_string(x);
            fin.push_back(s);
        }
    }
    cout << fin.size() << endl;
    for (int i = 0; i < fin.size(); ++i) {
        cout << fin[i] << endl;
    }
    return 0;
}