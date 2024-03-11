#include <bits/stdc++.h>
using namespace std;
#define SIZE 10
#define _ cout << '\n';
#define YN(f) cout << (f? "YES\n" : "NO\n");
#define yn(f) cout << (f? "Yes\n" : "No\n");
#define F first
#define S second
#define N n
#define V vector
#define vpri vector<pair<int , int>>
#define vprl vector<pair<ll , ll>>
#define FUN ios_base::sync_with_stdio(0),cin.tie(nullptr) , cout.tie(nullptr);
#define ll long long
#define out(vec) for(int i = 0 ; i < n ; i++ ){cout << vec[i] << ' ';}cout << '\n';
#define get(vec) for(int i = 0 ; i < n ; i++ )cin >> vec[i];
#define all(v) v.begin() , v.end()

//int n;
//int cnt = 0;
//vector<int>v1;
string s;
int i = 0 , n;
set<int>st;
bool flag = 0;
void can(int j){
    if(i==n){
        flag = 1;
        return;
    }
    if(j==n*2){
        return;
    }
    if(s[i]>s[j]&& st.insert(j).second){
        i++;
        st.insert(j);
        can(j+1);
    } else {
        can(j+1);
    }
}
void solve(int ii){
    cin >> n;
    cin >> s;
    string cc = s;
    sort(s.begin() , s.begin()+n);
    sort(s.begin()+n , s.end());
    for(int k = 0 ; k < 2 ; k ++){
        i = 0;
        can(n);
        for(int j = 0 ; j <n ; j++)swap(s[j], s[2*n - j - 1]);
        cc = s;
    }
    YN(flag)
}
signed main(){
    FUN
    int t;
    t = 1;
//    cin >> t;
    for (int l = 1; l <= t; ++l) {
        solve(l);
    }
}