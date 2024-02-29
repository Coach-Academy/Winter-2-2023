#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using namespace std;

int main()
{
    FAST;
    int n;
    cin >> n;
    vector<long long >vec(n);
    for(int i = 0 ; i < n ; i++)
        cin >> vec[i];
    long long health = 0;
    int p = n;
    priority_queue<int , vector<int> , greater<>>pq;
    for(int i = 0 ; i < n ; i++){
        health+=vec[i];
        if(vec[i] < 0)
            pq.push(vec[i]);
        if(health < 0 && !pq.empty()){
            health+=(pq.top() * -1);
            p--;
            pq.pop();
        }
    }
    cout << p << endl;


}
