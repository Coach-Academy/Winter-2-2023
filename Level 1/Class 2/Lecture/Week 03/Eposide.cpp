#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n , remaining_time;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    cin >> remaining_time;
    if(remaining_time > 24 )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
  }
}
