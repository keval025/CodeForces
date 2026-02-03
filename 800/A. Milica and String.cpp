#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string st;
        cin >> st;


        int cnt = 0;
        int cntB = 0;
        for(int i=0;i<n;i++){
            if(st[i] == 'B') cntB++;
        }

        int ans = 0;
        char ch = 'A';
        if(cntB == k){
            cout << 0 << endl;
            continue;
        }else if(cntB > k){
            int m = cntB - k;
            for(int i=0;i<n;i++){
                if(st[i] == 'B'){
                    m--;
                }
                if(m == 0){
                    cout << i + 1 << " " << B << endl;
                    break;
                }
            }
        }else{
            int m = k - cntB;
            int cntA = 0;
            for(int i=0;i<n;i++){
                if(st[i] == 'A'){
                    cntA++;
                }else{
                    cntB++;
                }
            }
        }


    }
}