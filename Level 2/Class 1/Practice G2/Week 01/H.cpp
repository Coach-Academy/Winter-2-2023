#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    string editor="";
    stack<string>undo;
    while(n--){
        int a;cin>>a;
        if(a==1){
            undo.push(editor);
            string word;
            cin>>word;
            editor+=word;
        }
        else if(a==2){
            int k;cin>>k;
            undo.push(editor);
            editor.erase(editor.end()-k,editor.end());
        }
        else if(a==3){
            int k;cin>>k;
            cout<<editor[k-1]<<endl;
        }
        else {
            editor = undo.top();
            undo.pop();
        }
    }

}
