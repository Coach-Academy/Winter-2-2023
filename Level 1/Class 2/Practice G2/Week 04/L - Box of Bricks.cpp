#include <bits/stdc++.h>
using namespace std;
int main()
{
  int cnt = 1;
  while(true){
    int n,sum=0,avg=0,ans=0;
    cin >> n;
    if (n == 0) break;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
      cin >> arr[i];
      sum += arr[i];
    }
    avg = sum/n;
    for (int i = 0 ; i < n ; i++){
      if (arr[i] > avg){
        ans += (arr[i]-avg);
      }
    }
    cout << "Set #" << cnt << '\n';
    cout << "The minimum number of moves is " << ans << ".\n\n";
    cnt++;
  }  
  return 0;
}



