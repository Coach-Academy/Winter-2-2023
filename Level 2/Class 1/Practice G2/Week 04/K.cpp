#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "unordered_map"
#include "cstring"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long
using namespace std;
int arr[200000],temp[200000];
ll inv;

void merg(int beg1,int end1,int beg2,int end2){
    int idx = beg1;
    int beg = beg1;
    while(beg1<=end1&&beg2<=end2){
        if(arr[beg1]>arr[beg2]){
            inv+=end1-beg1 +1;
            temp[idx++] = arr[beg2++];
        }
        else {
            temp[idx++] = arr[beg1++];
        }
    }
    while(beg1<=end1)temp[idx++] = arr[beg1++];
    while(beg2<=end2)temp[idx++] = arr[beg2++];
    memcpy(arr+beg,temp+beg,(idx-beg)*sizeof(int));
}
void merg_sort(int beg,int end){
    if(beg>=end)return ;
    int mid = beg + (end-beg)/2;
    merg_sort(beg,mid);
    merg_sort(mid+1,end);
    merg(beg,mid,mid+1,end);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

int t;cin>>t;
while(t--){
    int n;cin>>n;
    rep(n)cin>>arr[i];
    merg_sort(0,n-1);
    cout<<inv<<endl;
    inv = 0;
}


}
