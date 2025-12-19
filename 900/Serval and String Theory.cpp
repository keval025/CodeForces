#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        int k = 0;
        if(s[0] < s[n-1]){
            k = 1;
        }else if(s[0] >= s[n-1]  && m > 0){
            for(int i=0;i<n;i++){
                if(s[i] > s[0]){
                    k = 1;
                    break;
                }
            }
            
        }else{
            k = 0;
        }


        if(k == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}