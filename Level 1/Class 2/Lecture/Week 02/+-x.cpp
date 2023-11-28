#include<iostream>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b;
    int sum = a + b , mul = a * b , sub = a - b;
    if(sum >= sub && sum >= mul)
        cout << sum << endl;

    else if(mul >= sum && mul >= sub)
        cout << mul << endl;
    else
        cout << sub << endl;
    return 0;
}
