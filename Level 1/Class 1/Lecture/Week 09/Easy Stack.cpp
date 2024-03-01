#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using namespace std;

int main()
{
    FAST;
    int n , op , ele;
    stack<int>stk;
    cin >> n;
    while(n--){
        cin >> op;
        if(op == 1){
            cin >> ele;
            stk.push(ele);
        }
        else if(op == 2){
            if(!stk.empty())
                stk.pop();
        }
        else{
            if(!stk.empty())
                cout << stk.top() << '\n';
            else
                cout << "Empty!" << '\n';
        }
    }
 }

