#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    deque<int>dq;
    bool stright = true;
    while(tc--){
        string word;
        cin >> word;
        if(word == "back"){
            if(!dq.empty()){
                    if(stright == true){
                        cout << dq.back() << endl;
                        dq.pop_back();
                    }
                    else{
                        cout << dq.front() << endl;
                        dq.pop_front();
                    }

            }
            else{
                cout << "No job for Ada?" << endl;
            }
        }
        else if (word == "front"){
            if(!dq.empty()){
                if(stright == true){
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
                else{
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
            else {
                cout << "No job for Ada?" << endl;
            }
        }
        else if (word == "toFront"){
                int value;
                cin >> value;
                if(stright == true)
                    dq.push_front(value);
                else
                    dq.push_back(value);

        }
        else if(word == "push_back"){
            int value;
            cin >> value;
            if(stright == true)
                dq.push_back(value);
            else
                dq.push_front(value);
        }
        else if(word == "reverse")
            stright = !stright;

    }


}
