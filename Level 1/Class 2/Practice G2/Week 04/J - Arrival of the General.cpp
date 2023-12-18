#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,mx=0,mxindex=0,ans=0,mn=1e9,mnindex=0;
  cin >> n;
  int height[n];
  for (int i = 0 ; i < n ; i++)
    cin >> height[i];
  for (int i = 0 ; i < n ; i++){
    if (height[i] > mx){
      mx = height[i];
      mxindex = i;
    }
  }  
  while(mxindex > 0){
    swap(height[mxindex],height[mxindex-1]);
    ans++;
    mxindex--;
  }

  for (int i = 0 ; i < n ; i++){
    if (height[i] <= mn){
      mn = height[i];
      mnindex = i;
    }
  }  
  while(mnindex < n-1){
    swap(height[mnindex],height[mnindex+1]);
    ans++;
    mnindex++;
  }
  cout << ans << '\n';
  return 0;
}
