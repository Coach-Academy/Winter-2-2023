#include <bits/stdc++.h>

using namespace std;
void shift(int indx, vector<int> &num)
{
    int temp = num[0];
    for (int i = 0; i < indx; ++i) {
        num[i] = num[i + 1];
    }
    num[indx] = temp;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), moves(n, 0);
        for(auto &i : a)
            cin >> i;

        for (int i = n - 1; i >= 0 ; --i)
        {
            while(a[i]  != (i + 1))
            {
                shift(i, a);
                moves[i]++;
            }
        }
        for(auto i :moves)
            cout << i << ' ';
        cout << '\n';
    }
}