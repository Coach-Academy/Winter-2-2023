#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x, sum = 0, temp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>> arr[i];
        sum += arr[i];
    }
    cin >> x;
    temp = x / sum;
    sum = temp * sum;
    temp *= n;
    for (int i = 0; sum <= x; ++i) {
        sum += arr[i];
        temp++;
    }
    cout << temp;
}