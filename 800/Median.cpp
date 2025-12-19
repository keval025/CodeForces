#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int ans = 0;
        if((b - a) * (c - a) < 0){
            ans = a;
        }else if((c - b) * (a - b) < 0){
            ans = b;
        }else {
            ans = c;
        }
        cout << ans << endl;
    }
    return 0;
}