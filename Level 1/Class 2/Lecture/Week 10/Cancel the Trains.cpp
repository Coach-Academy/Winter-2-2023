#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using namespace std;

int main()
{
    FAST;
    int tc;
    cin >> tc;
    while(tc--){
        int left , bottom , value;
        set<int>st;
        cin >> left >> bottom;
        for(int i = 0 ; i < left; i++){
            cin >> value;
            st.insert(value);
        }
        int sol = 0;
        for(int i = 0 ; i < bottom ; i++){
            cin >> value;
            if(st.find(value)!=st.end())
                sol++;

        }
        cout << sol << endl;

    }
}
