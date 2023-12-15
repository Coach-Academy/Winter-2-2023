#include <bits/stdc++.h>

using namespace std;
/*
void bubbleSort(vector<int>& arr)
{
    int flag=0;
    for(int i=0 ; i<arr.size() ; i++)
    {
        flag=0;
        for(int j=0 ; j<arr.size()-i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==0)
        {
            break;
        }

    for(int j=0 ; j<10 ; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<"\n";
    }
}  ///O(N*N)

*/

/*
void insertionSort(vector<int>&arr)
{

    int curr,j;
    for(int i=1 ; i<arr.size() ; i++)
    {
        j=i-1;
        curr=arr[i];

        while(j>=0 && arr[j]>curr)
        {
            arr[j+1]=arr[j];
            j--;
        for(int k=0 ; k<10 ; k++)
        {
        cout<<arr[k]<<" ";
        }
        cout<<"\n";
        }
        arr[j+1]=curr;

    for(int k=0 ; k<10 ; k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<"\n";


    }
}///O(n^2)*/

void Merge(int l,int md, int r,vector<int>&arr)
{
    vector<int>L,R;

    for(int i=l ; i<=md ; i++)
    {
        L.push_back(arr[i]);
    }
    L.push_back(INT_MAX);
    for(int i=md+1 ; i<=r ; i++)
    {
        R.push_back(arr[i]);
    }
     R.push_back(INT_MAX);

    int lp=0,rp=0;

    for(int i=l ; i<=r ; i++)
    {
        if(L[lp]<=R[rp])
        {
           arr[i]=L[lp];
           lp++;
        }
        else
        {
            arr[i]=R[rp];
            rp++;
        }
    }
     for(int i=0 ; i<8 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";


}///O(N)




void mergeSort(int l, int r, vector<int>& arr) ///O(logn)
{
    if(l>=r)
        return;

    int md=(l+r)/2;
    mergeSort(l,md,arr);
    mergeSort(md+1,r,arr);



    Merge(l,md,r,arr);


}
///time:O(NlogN) space:O(N)

int main()
{
    /// 9 18 2 0 4 -1 28 27
    vector<int> a;
    int x;
    for(int i = 0 ; i<8 ; i++)
    {
        cin>>x;
        a.push_back(x);
    }

  //  bubbleSort(a);
  //insertionSort(a);
   mergeSort(0,a.size()-1,a);

    for(int i=0 ; i<8 ; i++)
    {
        cout<<a[i]<<" ";
    }




    return 0;
}
