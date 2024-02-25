#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#include "unordered_map"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<string>undo;
    string editor="";
    int q;cin>>q;
    while(q--){
        int op;cin>>op;
        if(op==1){

            string word;cin>>word;
            undo.push(editor);
            editor+=word;
        }else if(op==2){
            int k;cin>>k;
            undo.push(editor);
            editor.erase(editor.end()-k,editor.end());
        }
        else if(op==3) {
            int k;cin>>k;
            cout<<editor[k-1]<<endl;
        }
        else {
            editor = undo.top();
            undo.pop();
        }
    }
}
