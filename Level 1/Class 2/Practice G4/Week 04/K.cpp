#include<bits/stdc++.h>


using namespace std;

int main() {

    int a[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {

            int cnt = a[i][j];
            // i+1 , j
            if ( i+1 < 3)
                cnt += a[i+1][j];
            //i-1 , j
            if (i-1 >= 0)
                cnt += a[i-1][j];
            // i ,j+1
            if (j+1 < 3)
                cnt += a[i][j+1];
            // i ,j-1
            if (j-1 >= 0)
                cnt += a[i][j-1];

            if ( cnt %2 == 0)
                cout <<1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}