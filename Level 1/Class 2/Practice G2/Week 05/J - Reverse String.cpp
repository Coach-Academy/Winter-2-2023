#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--)
    {
       string a,b;
       cin >> a >> b;
       int f = 0 ;
        for (int i = 0; i < a.size(); ++i) {
            string m3dol = a.substr(0,i+1);
            string m2lob = a.substr(0,i);
            reverse(m2lob.begin(),  m2lob.end());
            string kamel = m3dol + m2lob;
            if ( kamel.find(b) != -1)
            {
                f = 1;
            }
        }
        if ( f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
