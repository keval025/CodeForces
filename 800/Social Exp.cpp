#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int diff = 0;

        while(n > 1){
            if(n % 6 == 0){
                n /= 6;
                diff += 2;
            }else if(n % 3 == 0){
                n /= 3;
                diff += 1;
            }else if(n % 2 == 0){
                n /= 2;
                diff += 1;
            }else{
                diff = -1;
                break;
            }
        }

        cout << diff << endl;
    }
    return 0;
}