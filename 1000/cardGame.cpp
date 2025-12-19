#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int cnt = 0;
        if(a1 >= b1){
            if(a1 > b1){
                if(a2 > b2){
                    cnt += 2;
                }else if(a2 == b2){
                    cnt += 2;
                }
            }else if(a1 == b1){
                if(a2 > b2){
                    cnt += 2;
                }
            }
        }

        if(a1 >= b2){
            if(a1 > b2){
                if(a2 > b1){
                    cnt += 2;
                }else if(a2 == b1){
                    cnt += 2;
                }
            }else if(a1 == b2){
                if(a2 > b1){
                    cnt += 2;
                }
            }
        }
        cout << cnt << endl;        
    }
}