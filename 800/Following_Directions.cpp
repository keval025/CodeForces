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

        int Us = 0;
        int Ds = 0;
        int Rs = 0;
        int Ls = 0;
        int flag = 0;
        for(int i=0;i<n;++i){
            if(s[i] == 'U'){
                Us++;
            }else if(s[i] == 'D'){
                Ds++;
            }else if(s[i] == 'R'){
                Rs++;
            }else if(s[i] == 'L'){
                Ls++;
            }

            if(Us - Ds == 1 && Rs - Ls == 1){
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