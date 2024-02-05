#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, worst, best, cnt = 0, score;
   cin >> n >> score;
   worst = best = score;
   while(--n)
   {
       cin >> score;

       if(score > best)
           cnt++, best = score;

       else if(score < worst)
           cnt++,  worst = score;
   }
   cout << cnt;
}
