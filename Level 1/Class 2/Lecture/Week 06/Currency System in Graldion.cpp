#include <bits/stdc++.h>

using namespace std;


int main() {
    int arr[1001];
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];

    int co = count(arr , arr+n , 1);
    if(co == 0)
        cout << 1 << endl;
    else
        cout << -1 << endl;

}
