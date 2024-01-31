#include<iostream>
#include<algorithm>
#include<string>
using namespace std ;
int main(){
string x;
string y;

cin>> x ;
cin>> y ;

reverse(x.begin() , x.end() ) ;
if( x==y){
    cout<<"YES" ;
}
else{

    cout<<"NO" ;

}
}