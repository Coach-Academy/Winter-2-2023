#include <iostream>
#include <string>

using namespace std;
int main ()
{
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if(str.size() > 10){
            cout << str.front() <<  str.size()-2 << str.back() << endl;
        }
        else{
            cout << str << endl;
        }
    }
    return 0;
}
