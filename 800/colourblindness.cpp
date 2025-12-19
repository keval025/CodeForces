#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string st1, st2;
        cin >> st1 >> st2;

        int k = 0;
        for(int i=0;i<n;i++){
            if(st1[i] == 'R' && (st2[i] == 'G' || st2[i] == 'B')){
                k = 1;
                break;
            }else if(st2[i] == 'R' && (st1[i] == 'G' || st1[i] == 'B')){
                k = 1;
                break;
            }
        }

        if(k == 1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}