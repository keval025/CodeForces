#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1;
        cin >> s1;
        int m;
        cin >> m;
        string s2, s3;
        cin >> s2;
        cin >> s3;

        string str1 = "", str2 = "";;
        for(int i=0;i<m;i++){
            if(s3[i] == 'V'){
                char ch = s2[i];
                str1 = ch + str1;  
            }else{
                char ch = s2[i];
                str2 += ch;
            }
        }
        cout << str1 + s1 + str2 << endl;
    }
    return 0;
}