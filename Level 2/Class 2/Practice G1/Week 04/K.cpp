#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
ll inversions = 0;
vector<int> a;
void merge(int l ,int r)
{
    int mid = (l+r)/2;
    deque<int> left, right;
    for (int i = l; i <=mid ; ++i) {
        left.push_back(a[i]);
    }
    for (int i = mid+1; i <= r; ++i) {
        right.push_back(a[i]);
    }
    for (int i = l; i <= r; ++i) {
        if (right.empty())
            a[i] = left.front(), left.pop_front();
        else if ( left.empty())
            a[i] = right.front(), right.pop_front();
        else if ( right.front()  >= left.front())
            a[i] = left.front() , left.pop_front();
        else
            a[i] = right.front() , right.pop_front(), inversions+= left.size();
    }
}
void mergesort( int l , int r)
{
    if ( l >= r)
        return;
    int mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1 , r);
    merge(l,r);
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        a.clear();
        inversions = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        mergesort(0, n - 1);
        cout << inversions << endl;
    }
    return 0;
}