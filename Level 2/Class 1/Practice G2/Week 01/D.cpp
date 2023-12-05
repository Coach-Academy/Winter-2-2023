#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        stack<char> st;
        string s;
        cin >> s;
        for (auto &a: s) {
            if (a == '(' || a == '{' || a == '['||st.empty())st.push(a);
            else {
               string res= "";
               res+=st.top();
               res+=a;
               if(res=="()"||res=="{}"||res=="[]")st.pop();
               else st.push(a);
            }
        }
        if(st.empty())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}

