#include <bits/stdc++.h>

using namespace std;


int main() {

    int t;
    cin >> t;
    vector<pair<string, int>> record;
    priority_queue<int, vector<int> , greater<int>> heap;

    while(t--)
    {
        int l;
        string s;
        cin >> s;
        if(s == "insert")
        {
            cin >> l;
            heap.push(l);
            record.push_back({s, l});
        }
        else if(s == "getMin")
        {
            cin >> l;
            while(!heap.empty() and heap.top() < l)
                heap.pop(), record.push_back({"removeMin",2e9});
            if(heap.empty() or heap.top() > l)
            {
                heap.push(l);
                record.push_back({"insert",l});
            }
            record.push_back({s, l});
        }
        else
        {
            if(heap.empty())
            {
                record.push_back({"insert", 0});
            }
            else
            {
                heap.pop();
            }
            record.push_back({s, 2e9});
        }
    }

    cout << record.size() << '\n';
    for(auto i : record)
    {
        cout << i.first;
        if(i.second != 2e9)
            cout << ' ' << i.second;
        cout << '\n';
    }
}