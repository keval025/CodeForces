#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string t;
        cin >> t;

        int j = 0;
        int n = s.size();
        int i = 0;
        while(i < n){
            if(s[i] == t[j] && j < t.size()){
                j++;
            }else if(s[i] == '?' && j < t.size()){
                s[i] = t[j];
                j++;
            }else if(s[i] == '?' && j == t.size()){
                s[i] = 'a';
            }
            i++;
        }

        if(j < t.size()){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            cout << s << endl;
        }
    }
}