#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
     int a = n%10;
     int b = n/100;
     if ( a == b)
         cout << "Yes";
     else
         cout << "No";
}