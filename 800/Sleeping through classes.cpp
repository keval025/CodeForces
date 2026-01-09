#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt = 0;
        int p = 0;
        int m;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                p = 1;
                m = k;
            }else{
                if(p == 1){
                    m--;
                    if(m == 0){
                        p = 0;
                    }
                }else{
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}