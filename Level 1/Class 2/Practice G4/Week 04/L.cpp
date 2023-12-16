#include<bits/stdc++.h>


using namespace std;

int main() {
    int n;
    int t = 0;
    while ( true)
    {
        cin >> n;
        if ( n == 0)
            break;
        t++;
        int a[n], sum =0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        int threshold = sum/n;
        int cnt =0;
        for (int i = 0; i < n; ++i) {
            if ( a[i] > threshold)
            {
                cnt += ( a[i] - threshold);
            }
        }
        cout << "Set #" << t << endl;
        cout << "The minimum number of moves is " << cnt <<"." << endl << endl;
    }


    return 0;
}