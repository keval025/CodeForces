#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        int ans = 0;
        if(a == b){
            ans = 0;
        }else if(b > a){
            if(b % a == 0){
                ans = 1;
            }else{
                ans = 2;
            }
        }else if(a < b){
            if(a % b == 0){
                ans = 1;
            }else{
                ans = 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}