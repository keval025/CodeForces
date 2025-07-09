#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;

        long long r1 = a;
        long long r2 = b;
        while(r1 % 2 == 0){
            r1 /= 2;
        }
        while(r2 % 2 == 0){
            r2 /= 2;
        }

        if(r1 != r2){
            cout << -1 << endl;
        }else{
            a /= r1;
            b /= r2;
            a = log2(a);
            b = log2(b);
            long long ans = ceil(abs(a - b) / 3.0);
            cout << ans << endl;
        }
    }
    return 0;
}