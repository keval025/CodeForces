#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char ch;
        cin >> ch;
        string s = "codeforces";
        int n = s.size();
        int flag = 0;
        for(int i=0;i<n;++i){
            if(s[i] == ch){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}