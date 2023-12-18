#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,ans=1;
  cin >> n;
  string st,st2;
  cin >> st;
  for (int i = 0 ; i < n-1 ; i++){
    cin >> st2;
    if (st2[0] == st[1]){
      ans++;
    }
    st = st2;
  }
  cout << ans << '\n';
  return 0;
}

// another code 

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,ans=1;
  cin >> n;
  string arr[n];
  for (int i = 0 ; i < n ; i++){
    cin >> arr[i];
  }
  for (int i = 1 ; i < n ; i++){
    if (arr[i][0] == arr[i-1][1])
      ans++;
  }
  cout << ans << '\n';
  return 0;
}
