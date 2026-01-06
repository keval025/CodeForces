#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st1;
        set<char> st2;
        
        int parity = 0;
        for(int i=0;i<n;i++){
            if(i % 2 == 0){
                st1.insert(s[i]);
                if(st2.find(s[i]) != st2.end()){
                    parity = 1;
                    break;
                }
            }else{
                st2.insert(s[i]);
                if(st1.find(s[i]) != st1.end()){
                    parity = 1;
                    break;
                }
            }
        }
        if(parity == 1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}