#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> vec(n) , pos , neg , zero;
   for(int i = 0 ; i < n ; i++){
    cin >> vec[i];
    if(vec[i]== 0)
        zero.push_back(vec[i]);
    else if(vec[i] > 0)
        pos.push_back(vec[i]);
    else
        neg.push_back(vec[i]);

   }
   if(pos.size() == 0){
    pos.push_back(neg.back());
    neg.pop_back();
    pos.push_back(neg.back());
    neg.pop_back();
   }
   if((neg.size() % 2) == 0){
    zero.push_back(neg.back());
    neg.pop_back();
   }

   cout << neg.size() << " ";
   for(auto i : neg)
    cout << i << " ";
   cout << endl;

   cout << pos.size() << " ";
   for(auto i : pos)
    cout << i << " ";
   cout << endl;

   cout << zero.size() <<" ";
   for(auto i : zero)
    cout << i << " ";


}
