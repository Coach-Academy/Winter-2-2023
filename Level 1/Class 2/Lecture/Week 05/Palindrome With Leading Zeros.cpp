#include <bits/stdc++.h>
#include <string>

using namespace std;
int main ()
{
    string n;
    cin >> n;
    while(n.back() == '0'){
        n.pop_back();
    }
    string n2 = n;
     reverse(n2.begin() , n2.end());
     if(n == n2)
        cout << "Yes" << endl;
     else
        cout << "No" << endl;

    return 0;
}
