#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--)
    {
        string s, t;
        cin >> s >> t;
        bool flag = false;

        for (int i = 0; i < s.size(); ++i) {
            if(s[i] == t.front())
            {
                string temp = "";
                for (int j = i; j < s.size(); ++j)
                {
                    temp += s[j];
                    if(temp == t)
                    {
                        flag = true;
                    }
                    string temp2 = temp;
                    for (int k = j - 1; k >= 0; --k)
                    {
                        temp2 += s[k];
                        if(temp2 == t)
                        {
                            flag = true;
                        }
                    }
                }

            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}