#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using namespace std;

int main()
{
   int n , d , ele;
   cin >> n >> d;
   queue<int>q;
   for(int i = 0 ; i < n ; i++){
    cin >> ele;
    q.push(ele);
   }
   while(d--){
    q.push(q.front());
    q.pop();
   }
   while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
   }
}
