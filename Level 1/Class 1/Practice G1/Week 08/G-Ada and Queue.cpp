#include <bits/stdc++.h>

using namespace std;
int main()
{
    int q;
    bool reversed = true;
    cin >> q;
    deque<int> d;
    while(q--)
    {
        string s;
        cin >> s;
        if(s =="back" and !d.empty())
        {
            if(reversed)
            {
                cout << d.back() << '\n';
                d.pop_back();
            }
            else
            {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if(s == "front" and !d.empty())
        {
            if(reversed)
            {
                cout << d.front() << '\n';
                d.pop_front();
            }
            else
            {
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if(s == "reverse")
        {
            reversed = !reversed;
        }
        else if(s == "push_back")
        {
            int x;
            cin >> x;
            if(reversed)
                d.push_back(x);
            else
                d.push_front(x);
        }
        else if(s == "toFront")
        {
            int x;
            cin >> x;
            if(reversed)
                d.push_front(x);
            else
                d.push_back(x);
        }
        else
        {
            puts("No job for Ada?");
        }
    }
}