#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>ans;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            if(arr[i] == 1){
                ans.push_back(arr[i-1]);
            }
        }
        ans.push_back(arr[n-1]);
        cout<<ans.size()<<'\n';
        for(auto it:ans)cout<<it<<' ';
    }
}