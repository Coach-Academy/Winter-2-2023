#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> candies(1000, 0);
    deque<int> a;
    for (int child = 1; child <= n; ++child) {
        int x;
        cin >> x;
        candies[child] = x;
        a.push_back(child);
    }

    while(a.size() > 1)
    {
        if(candies[a.front()] <= m) a.pop_front();
        else
        {
            candies[a.front()] -= m;
            a.push_back(a.front());
            a.pop_front();
        }
    }
    cout << a.front();
}