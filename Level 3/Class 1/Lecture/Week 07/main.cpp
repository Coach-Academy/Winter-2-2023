#include <bits/stdc++.h>

using namespace std;

int fib(int n) { // O(2^n)
    if (n < 2) return n;
    return fib(n-1)+fib(n-2);
}

const int N = 1e5+10;
int dp[N];
int fibMem(int n) { // O(N)
    if (n < 2) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fibMem(n-1)+fibMem(n-2);
}

int main() {
//    for (auto &i : dp) i = -1;
    memset(dp, -1, sizeof dp);
    return 0;
}
