#include <iostream>
#include <vector>

using namespace std;

int sum(const vector<int>& arr, int n) {
    if (n == 0) {
        return 0;
    }

    return sum(arr, n - 1) + arr[n - 1];
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }
        int result = sum(arr, N);

        cout << "Case " << t << ": " << result << endl;
    }

    return 0;
}