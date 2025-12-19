#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        sort(str.begin(), str.end());

        string st = "Timur";
        sort(st.begin(), st.end());

        if(str == st){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}