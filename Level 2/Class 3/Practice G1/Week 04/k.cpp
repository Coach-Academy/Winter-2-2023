#include<bits/stdc++.h>
using namespace std;

long long cnt=0;
void merge(int l,int r,vector<int>&vec){
    queue<int>left,right;
    int mid=(l+r)/2;
    for(int i=l;i<=mid;i++)left.push(vec[i]);
    for(int i=mid+1;i<=r;i++)right.push(vec[i]);
    for(int i=l;i<=r;i++){
        if(left.empty()){
            vec[i]=right.front();
            right.pop();
        }
        else if(right.empty()){
            vec[i]=left.front();
            left.pop();
        }
        else if(left.front()<=right.front()){
            vec[i]=left.front();
            left.pop();
        }
        else{
            vec[i]=right.front();
            right.pop();
            cnt+=left.size();
        }
    }




}



void mergeSort(int l,int r,vector<int>&vec){
    if(l>=r)return;
    int mid=(l+r)/2;
    mergeSort(l,mid,vec);
    mergeSort(mid+1,r,vec);
    merge(l,r,vec);


}


signed  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cnt=0;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        mergeSort(0,n-1,vec);
        cout<<cnt<<'\n';
    }


    return 0;
}

